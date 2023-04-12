// Create an rmw client to communicate with the specified service. 
rmw_client_t * rmw_create_client(
    const rmw_node_t * node,
    const rosidl_service_type_support_t * type_support,
    const char * service_name,
    const rmw_qos_profile_t * qos_profile) {}

// Destroy and unregister a service client. 
rmw_ret_t rmw_destroy_client(
    rmw_node_t * node, 
    rmw_client_t * client) {}

//
rmw_ret_t rmw_client_set_on_new_response_callback(
    rmw_client_t * client,
        rmw_event_callback_t callback,
        const void * user_data) {}

// Check if a service server is available for the given service client.
// This function will return true for is_available if there is a service 
// server available for the given client.
// The node parameter must not be NULL, and must point to a valid node.
// The client parameter must not be NULL, and must point to a valid client.
// The given client and node must match, i.e. the client must have been 
// created using the given node.
// The is_available parameter must not be NULL, and must point to a bool 
// variable. The result of the check will be stored in the is_available 
// parameter.
// This function does manipulate heap memory. 
// This function is not thread-safe. This function is lock-free.
rmw_ret_t rmw_service_server_is_available(
    const rmw_node_t * node,
    const rmw_client_t * client,
    bool * is_available) {}

// Send a service request to the rmw server.
rmw_ret_t rmw_send_request(
    const rmw_client_t * client,
    const void * ros_request,
    int64_t * sequence_id) {}

// Attempt to get the response from a service request.
rmw_ret_t rmw_take_response(
    const rmw_client_t * client,
    rmw_service_info_t * request_header,
    void * ros_response,
    bool * taken) {}