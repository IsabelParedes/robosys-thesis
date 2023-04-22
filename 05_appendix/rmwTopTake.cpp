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
rmw_ret_t rmw_take_serialized_message(
        const rmw_subscription_t * subscription,
        rmw_serialized_message_t * serialized_message,
        bool * taken,
        rmw_subscription_allocation_t * allocation) {}

// Take a message without deserializing it and with its additional 
// message information.
rmw_ret_t rmw_take_serialized_message_with_info(
        const rmw_subscription_t * subscription,
        rmw_serialized_message_t * serialized_message,
        bool * taken,
        rmw_message_info_t * message_info,
        rmw_subscription_allocation_t * allocation) {}

// Take a loaned message.
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
rmw_ret_t rmw_return_loaned_message_from_subscription(
        const rmw_subscription_t * subscription,
        void * loaned_message) {}

// Take multiple incoming messages from a subscription with additional metadata.
rmw_ret_t rmw_take_sequence(
    const rmw_subscription_t * subscription,
    size_t count,
    rmw_message_sequence_t * message_sequence,
    rmw_message_info_sequence_t * message_info_sequence,
    size_t * taken,
    rmw_subscription_allocation_t * allocation) {}