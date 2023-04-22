// Publish a given ROS message via a publisher.
rmw_ret_t rmw_publish(
    const rmw_publisher_t * publisher,
    const void * ros_message,
        rmw_publisher_allocation_t * allocation) {}

// Publish an already serialized message.
rmw_ret_t rmw_publish_serialized_message(
    const rmw_publisher_t * publisher,
    const rmw_serialized_message_t * serialized_message,
        rmw_publisher_allocation_t * allocation) {}

// Publish a loaned ROS message via a publisher and return ownership of the 
// loaned message back to the middleware.
rmw_ret_t rmw_publish_loaned_message(
        const rmw_publisher_t * publisher,
        void * ros_message,
        rmw_publisher_allocation_t * allocation) {}

// Initialize a publisher allocation to be used with later publications.
rmw_ret_t rmw_init_publisher_allocation(
        const rosidl_message_type_support_t * type_support,
        const rosidl_runtime_c__Sequence__bound * message_bounds,
        rmw_publisher_allocation_t * allocation) {}

// Destroy a publisher allocation object.
rmw_ret_t rmw_fini_publisher_allocation(
        rmw_publisher_allocation_t * allocation) {}

// Create and return an rmw publisher.
rmw_publisher_t * rmw_create_publisher(
    const rmw_node_t * node,
    const rosidl_message_type_support_t * type_support,
    const char * topic_name,
    const rmw_qos_profile_t * qos_profile,
    const rmw_publisher_options_t * publisher_options) {}

// Destroy publisher.
rmw_ret_t rmw_destroy_publisher(
    rmw_node_t * node, 
    rmw_publisher_t * publisher) {}

// Retrieve the number of matched subscriptions to a publisher.
rmw_ret_t rmw_publisher_count_matched_subscriptions(
    const rmw_publisher_t * publisher,
    size_t * subscription_count) {}

// Manually assert that this Publisher is alive 
rmw_ret_t rmw_publisher_assert_liveliness(const rmw_publisher_t * publisher) {}

// Borrow a loaned message.
rmw_ret_t rmw_borrow_loaned_message(
        const rmw_publisher_t * publisher,
        const rosidl_message_type_support_t * type_support,
        void ** ros_message) {}

// Return a loaned message previously borrowed from a publisher.
rmw_ret_t rmw_return_loaned_message_from_publisher(
        const rmw_publisher_t * publisher,
        void * loaned_message) {}

// Count the number of publishers matching a topic name
rmw_ret_t rmw_count_publishers(
    const rmw_node_t * node,
    const char * topic_name,
    size_t * count) {}