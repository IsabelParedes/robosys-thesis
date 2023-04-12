// Initialize an rmw publisher event
rmw_ret_t rmw_publisher_event_init(
    rmw_event_t * rmw_event,
    const rmw_publisher_t * publisher,
    rmw_event_type_t event_type) {}

// Initialize an rmw subscription event
rmw_ret_t rmw_subscription_event_init(
    rmw_event_t * rmw_event,
    const rmw_subscription_t * subscription,
    rmw_event_type_t event_type) {}

// 
rmw_ret_t rmw_event_set_callback(
    rmw_event_t * rmw_event,
        rmw_event_callback_t callback,
        const void * user_data) {}

// Take an event from the event handle
rmw_ret_t rmw_take_event(
    const rmw_event_t * event_handle,
    void * event_info,
    bool * taken) {}