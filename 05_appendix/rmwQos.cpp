// Retrieve the actual qos settings of the publisher.
rmw_ret_t rmw_publisher_get_actual_qos(
    const rmw_publisher_t * publisher,
    rmw_qos_profile_t * qos) {}

// Retrieve the actual qos settings of the subscriber.
rmw_ret_t rmw_subscription_get_actual_qos(
    const rmw_subscription_t * subscription,
    rmw_qos_profile_t * qos) {}

// Retrieve qos settings for service response
rmw_ret_t rmw_service_response_publisher_get_actual_qos(
    const rmw_service_t * service,
    rmw_qos_profile_t * qos) {}

// Retrieve qos settings for client response
rmw_ret_t rmw_client_response_subscription_get_actual_qos(
    const rmw_client_t * client,
    rmw_qos_profile_t * qos) {}

// Retrieve qos settings for client request
rmw_ret_t rmw_client_request_publisher_get_actual_qos(
    const rmw_client_t * client,
    rmw_qos_profile_t * qos) {}

// Retrieve qos settings for service request
rmw_ret_t rmw_service_request_subscription_get_actual_qos(
    const rmw_service_t * service,
    rmw_qos_profile_t * qos) {}

// Check if two qos profiles are compatible
rmw_ret_t rmw_qos_profile_check_compatible(
        const rmw_qos_profile_t publisher_profile,
        const rmw_qos_profile_t subscription_profile,
    rmw_qos_compatibility_type_t * compatibility,
    char * reason,
    size_t reason_size) {}