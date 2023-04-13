// Get the unique serialization format for this middleware.
// Return the format in which binary data is serialized. One middleware can 
// only have one encoding. In contrast to the implementation identifier, the 
// serialization format can be equal between multiple RMW implementations. 
// This means, that the same binary messages can be deserialized by RMW 
// implementations with the same format. 
const char * rmw_get_serialization_format() {}

// Compute the size of a serialized message.
// Given a message definition and bounds, compute the serialized size.
rmw_ret_t rmw_get_serialized_message_size(
        const rosidl_message_type_support_t * type_support,
        const rosidl_runtime_c__Sequence__bound * message_bounds,
        size_t * size) {}

// Serialize a ROS message into a rmw_serialized_message_t.
// The ROS message is serialized into a byte stream contained within the 
// rmw_serialized_message_t structure. The serialization format depends on 
// the underlying middleware.
rmw_ret_t rmw_serialize(
        const void * ros_message,
        const rosidl_message_type_support_t * type_support,
        rmw_serialized_message_t * serialized_message) {}

// Deserialize a ROS message.
// The given rmw_serialized_message_t's internal byte stream buffer is 
// deserialized into the given ROS message. The ROS message must already be 
// allocated and initialized, and must match the given typesupport structure. 
// The serialization format expected in the rmw_serialized_message_t depends 
// on the underlying middleware.
rmw_ret_t rmw_deserialize(
        const rmw_serialized_message_t * serialized_message,
        const rosidl_message_type_support_t * type_support,
        void * ros_message) {}