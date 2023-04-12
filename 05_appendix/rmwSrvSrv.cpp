// Create an rmw service server that responds to requests. 
rmw_service_t * rmw_create_service(
    const rmw_node_t * node,
    const rosidl_service_type_support_t * type_support,
    const char * service_name, 
    const rmw_qos_profile_t * qos_profile) {}

// Destroy and unregister the service from this node. 
rmw_ret_t rmw_destroy_service(
    rmw_node_t * node, 
    rmw_service_t * service) {}

rmw_ret_t rmw_service_set_on_new_request_callback(
    rmw_service_t * rmw_service,
        rmw_event_callback_t callback,
        const void * user_data) {}

// Attempt to take a request from this service's request buffer. 
rmw_ret_t rmw_take_request(
    const rmw_service_t * service,
    rmw_service_info_t * service_info,
    void * ros_request,
    bool * taken) {}

// Send response to a client's request. 
rmw_ret_t rmw_send_response(
    const rmw_service_t * service,
    rmw_request_id_t * request_id,
    void * ros_response) {}