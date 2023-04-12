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
// This function returns a list of service names in the ROS graph and 
// their types.
rmw_ret_t rmw_get_service_names_and_types(
    const rmw_node_t * node,
    rcutils_allocator_t * allocator,
    rmw_names_and_types_t * service_names_and_types) {}

// Return a list of node name and namespaces discovered via a node.
// This function will return a list of node names and a list of node 
// namespaces that are discovered via the middleware. The two lists represent 
// pairs of namespace and name for each discovered node. The lists will be 
// the same length and the same position will refer to the same node across 
// lists.
// The node parameter must not be NULL, and must point to a valid node.
// The node_names parameter must not be NULL, and must point to a valid 
// string array.
// The node_namespaces parameter must not be NULL, and must point to a valid 
// string array.
// This function does manipulate heap memory. This function is not 
// thread-safe. This function is lock-free.
rmw_ret_t rmw_get_node_names(
    const rmw_node_t * node,
    rcutils_string_array_t * node_names,
    rcutils_string_array_t * node_namespaces) {}

// Return a list of node name and namespaces discovered via a node with 
// its enclave.
// Similar to rmw_get_node_names, but it also provides the enclave name.
rmw_ret_t rmw_get_node_names_with_enclaves(
    const rmw_node_t * node,
    rcutils_string_array_t * node_names,
    rcutils_string_array_t * node_namespaces,
    rcutils_string_array_t * enclaves) {}