// Publish a given ROS message via a publisher.
rmw_ret_t rmw_publish(
    const rmw_publisher_t * publisher,
    const void * ros_message,
        rmw_publisher_allocation_t * allocation) {}

// Publish an already serialized message.
// The publisher must already be registered with the correct message type 
// support so that it can send serialized data corresponding to that type. 
// This function sends the serialized byte stream directly over the wire without 
// having to serialize the message first. A ROS message can be serialized 
// manually using the rmw_serialize() function.
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
// This creates an allocation object that can be used in conjunction with 
// the rmw_publish method to perform more carefully control memory allocations.
// This will allow the middleware to preallocate the correct amount of 
// memory for a given message type and message bounds. As allocation is 
// performed in this method, it will not be necessary to allocate in the 
// rmw_publish method.
rmw_ret_t rmw_init_publisher_allocation(
        const rosidl_message_type_support_t * type_support,
        const rosidl_runtime_c__Sequence__bound * message_bounds,
        rmw_publisher_allocation_t * allocation) {}

// Destroy a publisher allocation object.
// This deallocates any memory allocated by rmw_init_publisher_allocation.
rmw_ret_t rmw_fini_publisher_allocation(
        rmw_publisher_allocation_t * allocation) {}

// Create and return an rmw publisher.
// The argument publisher_options must not be nullptr.
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
// Query the underlying middleware to determine how many subscriptions are matched to a given publisher.
rmw_ret_t rmw_publisher_count_matched_subscriptions(
    const rmw_publisher_t * publisher,
    size_t * subscription_count) {}

// Manually assert that this Publisher is alive 
// (for RMW_QOS_POLICY_LIVELINESS_MANUAL_BY_TOPIC)
// If the rmw Liveliness policy is set to RMW_QOS_POLICY_LIVELINESS_MANUAL_BY_TOPIC, 
// the creator of this publisher may manually call assert_liveliness at some 
// point in time to signal to the rest of the system that this Node is still alive.
rmw_ret_t rmw_publisher_assert_liveliness(const rmw_publisher_t * publisher) {}

// Borrow a loaned message.
// The memory allocated for the ros message belongs to the middleware 
// and must not be deallocated.
rmw_ret_t rmw_borrow_loaned_message(
        const rmw_publisher_t * publisher,
        const rosidl_message_type_support_t * type_support,
        void ** ros_message) {}

// Return a loaned message previously borrowed from a publisher.
// The ownership of the passed in ros message will be transferred back to the 
// middleware. The middleware might deallocate and destroy the message so that 
// the pointer is no longer guaranteed to be valid after this call.
rmw_ret_t rmw_return_loaned_message_from_publisher(
        const rmw_publisher_t * publisher,
        void * loaned_message) {}

// Count the number of publishers matching a topic name
rmw_ret_t rmw_count_publishers(
    const rmw_node_t * node,
    const char * topic_name,
    size_t * count) {}