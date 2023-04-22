// Initialize a subscription allocation to be used with later takes.
rmw_ret_t rmw_init_subscription_allocation(
        const rosidl_message_type_support_t * type_support,
        const rosidl_runtime_c__Sequence__bound * message_bounds,
        rmw_subscription_allocation_t * allocation) {}

// Destroy a publisher allocation object.
rmw_ret_t rmw_fini_subscription_allocation(
        rmw_subscription_allocation_t * allocation) {}

// Create and return an rmw subscription.
rmw_subscription_t * rmw_create_subscription(
    const rmw_node_t * node,
    const rosidl_message_type_support_t * type_support,
    const char * topic_name,
    const rmw_qos_profile_t * qos_policies,
    const rmw_subscription_options_t * subscription_options) {}

// Destroy subscription.
rmw_ret_t rmw_destroy_subscription(
    rmw_node_t * node, 
    rmw_subscription_t * subscription) {}

// Retrieve the number of matched publishers to a subscription.
rmw_ret_t rmw_subscription_count_matched_publishers(
    const rmw_subscription_t * subscription,
    size_t * publisher_count) {}

// Count the number of subscribers matching a topic name
rmw_ret_t rmw_count_subscribers(
    const rmw_node_t * node,
    const char * topic_name,
    size_t * count) {}

// Set a callback
rmw_ret_t rmw_subscription_set_on_new_message_callback(
    rmw_subscription_t * subscription,
        rmw_event_callback_t callback,
        const void * user_data) {}