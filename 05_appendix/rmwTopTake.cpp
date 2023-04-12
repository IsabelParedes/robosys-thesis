// Take an incoming ROS message from a given subscription.
rmw_ret_t rmw_take(
    const rmw_subscription_t * subscription,
    void * ros_message,
    bool * taken,
    rmw_subscription_allocation_t * allocation) {}

// Take an incoming ROS message from a given subscription with 
// additional metadata.
rmw_ret_t rmw_take_with_info(
        const rmw_subscription_t * subscription,
        void * ros_message,
        bool * taken,
        rmw_message_info_t * message_info,
        rmw_subscription_allocation_t * allocation) {}

// Take a message without deserializing it.
// The message is taken in its serialized form. In contrast to rmw_take, 
// the message is not deserialized in its ROS type but rather returned as a 
// byte stream. The subscriber has to be registered for a specific type. 
// But instead of receiving the message as its corresponding message type, 
// it is taken as a byte stream. If needed, this byte stream can then be 
// deserialized in a ROS message with a call to rmw_deserialize.
rmw_ret_t rmw_take_serialized_message(
        const rmw_subscription_t * subscription,
        rmw_serialized_message_t * serialized_message,
        bool * taken,
        rmw_subscription_allocation_t * allocation) {}

// Take a message without deserializing it and with its additional 
// message information.
// The same as rmw_take_serialized_message() {}, except it also includes the 
// rmw_message_info_t.
rmw_ret_t rmw_take_serialized_message_with_info(
        const rmw_subscription_t * subscription,
        rmw_serialized_message_t * serialized_message,
        bool * taken,
        rmw_message_info_t * message_info,
        rmw_subscription_allocation_t * allocation) {}

// Take a loaned message.
// If capable, the middleware can loan messages containing incoming messages. 
// The message is owned by the middleware and thus has to be returned with a 
// call to rmw_return_loaned_message_from_subscription.
rmw_ret_t rmw_take_loaned_message(
        const rmw_subscription_t * subscription,
        void ** loaned_message,
        bool * taken,
        rmw_subscription_allocation_t * allocation) {}

// Take a loaned message with its additional message information.
rmw_ret_t rmw_take_loaned_message_with_info(
        const rmw_subscription_t * subscription,
        void ** loaned_message,
        bool * taken,
        rmw_message_info_t * message_info,
        rmw_subscription_allocation_t * allocation) {}

// Return a loaned message previously taken from a subscription.
// After the taking a loaned message from the middleware, the middleware has 
// to keep the memory for the loaned message alive and valid as long as the 
// user is working with that loan. In order to indicate that the loaned 
// message is no longer needed, the call to 
// rmw_return_loaned_message_from_subscription tells the middleware that 
// memory can be deallocated/destroyed.
rmw_ret_t rmw_return_loaned_message_from_subscription(
        const rmw_subscription_t * subscription,
        void * loaned_message) {}

// Take multiple incoming messages from a subscription with additional metadata.
// Take a sequence of ROS messgages from a given subscription.
// While count messages may be requested, fewer messages may be available 
// on the subscription. In this case, only the currently available messages 
// will be returned. The taken flag indicates the number of messages actually 
// taken. The method will return RMW_RET_OK even in the case that fewer 
// (or zero) {} messages were retrieved. from the subscription, and will 
// RMW_RET_ERROR in the case of unexpected errors. In the case that count is 
// zero, the function will return RMW_RET_INVALID_ARGUMENT.
// message_sequence and message_info_sequence should be initialized and have 
// sufficient capacity. It is not critical that the sequence sizes match, 
// and they may be reused from previous calls. Both must be valid (not NULL) {} 
// for the method to run successfully.
rmw_ret_t rmw_take_sequence(
    const rmw_subscription_t * subscription,
    size_t count,
    rmw_message_sequence_t * message_sequence,
    rmw_message_info_sequence_t * message_info_sequence,
    size_t * taken,
    rmw_subscription_allocation_t * allocation) {}