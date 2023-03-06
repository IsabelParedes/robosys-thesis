// The Module object: Our interface to the outside world. We import
// and export values on it. There are various ways Module can be used:
// 1. Not defined. We create it here
// 2. A function parameter, function(Module) { ..generated code.. }
// 3. pre-run appended it, var Module = {}; ..generated code..
// 4. External script tag defines var Module.
// We need to check if Module already exists (e.g. case 3 above).
// Substitution will be replaced with actual code on later stage of the build,
// this way Closure Compiler will not mangle it (e.g. case 4. above).
// Note that if you want to run closure, and also to use Module
// after the generated code, you will need to define   var Module = {};
// before the code. Then that object will be used in the code, and you
// can continue to use Module afterwards as well.
var Module = typeof Module != 'undefined' ? Module : {};

function sleep(ms) {
     new Promise(resolve => setTimeout(resolve, ms));
}

let lastMessage = "data: empty";
let receivedNewMessage = false;
let topic = "";

self.onmessage = function(event) {
    // When a new message is received from main
    lastMessage = event.data;
    receivedNewMessage = true;
}

Module["registerParticipant"] = function registerParticipant(topic_name, role)
{
    topic = topic_name;
    let gid = Math.random().toString(16).slice(2)

    // Register new participant with main
    self.postMessage({
        command: "register",
        topic:   topic_name,
        role:    role,
        gid:     gid
    });

    return gid;
}

Module["deregisterParticipant"] = function deregisterParticipant(gid)
{
    // Deregister participant from main
    self.postMessage({
        command: "deregister",
        topic:   topic,
        gid:     gid
    });

    return;
}

Module["publishMessage"] = function publishMessage(message, topic_name)
{
    // Send message to main
    if (message.startsWith("data:")) {
        self.postMessage({
        command: "publish",
        topic:    topic_name,
        message: message
        });
    }

    // Assume it gets published
    return true;
}

Module["retrieveMessage"] = async function retrieveMessage(topic_name)
{
    receivedNewMessage = false;
    // Trigger main to send new message
    self.postMessage({
        command: "retrieve",
        topic:    topic_name
    });

    await sleep(100);

    return ( receivedNewMessage ? lastMessage : "" );
}
