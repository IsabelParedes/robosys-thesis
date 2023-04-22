// Get the name of the rmw implementation being used
const char * rmw_get_implementation_identifier() {}

// Get the unique identifier of the publisher.
rmw_ret_t rmw_get_gid_for_publisher(
    const rmw_publisher_t * publisher,
    rmw_gid_t * gid) {}

// Check if two gid objects are the same.
rmw_ret_t rmw_compare_gids_equal(
    const rmw_gid_t * gid1,
    const rmw_gid_t * gid2,
    bool * result) {}

// Retrieve the information for all publishers to a given topic. 
rmw_ret_t rmw_get_publishers_info_by_topic(
    const rmw_node_t * node,
    rcutils_allocator_t * allocator,
    const char * topic_name,
    bool no_mangle,
    rmw_topic_endpoint_info_array_t * subscriptions_info) {}

// Retrieve the information for all subscriptions to a given topic
rmw_ret_t rmw_get_subscriptions_info_by_topic(
    const rmw_node_t * node,
    rcutils_allocator_t * allocator,
    const char * topic_name,
    bool no_mangle,
    rmw_topic_endpoint_info_array_t * subscriptions_info) {}

// Return a list of published topic names and their types.
rmw_ret_t rmw_get_publisher_names_and_types_by_node(
    const rmw_node_t * node,
    rcutils_allocator_t * allocator,
    const char * node_name,
    const char * node_namespace,
    bool no_demangle,
    rmw_names_and_types_t * names_and_types) {}

// Return a list of subscribed topic names and their types.
rmw_ret_t rmw_get_subscriber_names_and_types_by_node(
    const rmw_node_t * node,
    rcutils_allocator_t * allocator,
    const char * node_name,
    const char * node_namespace,
    bool no_demangle,
    rmw_names_and_types_t * names_and_types) {}

// Return a list of service topic names and their types.
rmw_ret_t rmw_get_service_names_and_types_by_node(
    const rmw_node_t * node,
    rcutils_allocator_t * allocator,
    const char * node_name,
    const char * node_namespace,
    rmw_names_and_types_t * names_and_types) {}

// Return a list of service client topic names and their types. 
rmw_ret_t rmw_get_client_names_and_types_by_node(
    const rmw_node_t * node,
    rcutils_allocator_t * allocator,
    const char * node_name,
    const char * node_namespace,
    rmw_names_and_types_t * names_and_types) {}

// Return a list of topic names and their types.
rmw_ret_t rmw_get_topic_names_and_types(
    const rmw_node_t * node,
    rcutils_allocator_t * allocator,
    bool no_demangle,
    rmw_names_and_types_t * names_and_types) {}

// Return a list of service names and their types.
rmw_ret_t rmw_get_service_names_and_types(
    const rmw_node_t * node,
    rcutils_allocator_t * allocator,
    rmw_names_and_types_t * service_names_and_types) {}

// Return a list of node name and namespaces discovered via a node.
rmw_ret_t rmw_get_node_names(
    const rmw_node_t * node,
    rcutils_string_array_t * node_names,
    rcutils_string_array_t * node_namespaces) {}

// Return a list of node name and namespaces discovered via a node with 
// its enclave.
rmw_ret_t rmw_get_node_names_with_enclaves(
    const rmw_node_t * node,
    rcutils_string_array_t * node_names,
    rcutils_string_array_t * node_namespaces,
    rcutils_string_array_t * enclaves) {}

// Set the current log severity
rmw_ret_t rmw_set_log_severity(
        rmw_log_severity_t severity) {}