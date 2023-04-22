// Get the unique serialization format for this middleware.
const char * rmw_get_serialization_format() {}

// Compute the size of a serialized message.
rmw_ret_t rmw_get_serialized_message_size(
        const rosidl_message_type_support_t * type_support,
        const rosidl_runtime_c__Sequence__bound * message_bounds,
        size_t * size) {}

// Serialize a ROS message into a rmw_serialized_message_t.
rmw_ret_t rmw_serialize(
        const void * ros_message,
        const rosidl_message_type_support_t * type_support,
        rmw_serialized_message_t * serialized_message) {}

// Deserialize a ROS message.
rmw_ret_t rmw_deserialize(
        const rmw_serialized_message_t * serialized_message,
        const rosidl_message_type_support_t * type_support,
        void * ros_message) {}