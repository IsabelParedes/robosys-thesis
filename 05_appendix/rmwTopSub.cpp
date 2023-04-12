// Initialize a subscription allocation to be used with later takes.
// This creates an allocation object that can be used in conjunction with 
// the rmw_take method to perform more carefully control memory allocations.
// This will allow the middleware to preallocate the correct amount of 
// memory for a given message type and message bounds. As allocation is 
// performed in this method, it will not be necessary to allocate in the 
// rmw_take method.
rmw_ret_t rmw_init_subscription_allocation(
        const rosidl_message_type_support_t * type_support,
        const rosidl_runtime_c__Sequence__bound * message_bounds,
        rmw_subscription_allocation_t * allocation) {}

// Destroy a publisher allocation object.
// This deallocates memory allocated by rmw_init_subscription_allocation.
rmw_ret_t rmw_fini_subscription_allocation(
        rmw_subscription_allocation_t * allocation) {}

// Create and return an rmw subscription.
// The argument subscription_options must not be nullptr.
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
// Query the underlying middleware to determine how many publishers are matched to a given subscription.
rmw_ret_t rmw_subscription_count_matched_publishers(
    const rmw_subscription_t * subscription,
    size_t * publisher_count) {}

// Count the number of subscribers matching a topic name
rmw_ret_t rmw_count_subscribers(
    const rmw_node_t * node,
    const char * topic_name,
    size_t * count) {}

rmw_ret_t rmw_subscription_set_on_new_message_callback(
    rmw_subscription_t * subscription,
        rmw_event_callback_t callback,
        const void * user_data) {}