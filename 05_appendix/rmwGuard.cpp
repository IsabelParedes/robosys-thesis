// Create a guard condition and return a handle to that guard condition.
rmw_guard_condition_t * rmw_create_guard_condition(rmw_context_t * context) {}

// Finalize a given guard condition handle, reclaim the resources, 
// and deallocate the handle. 
rmw_ret_t rmw_destroy_guard_condition(
    rmw_guard_condition_t * rmw_guard_condition) {}

// Trigger guard condition
rmw_ret_t rmw_trigger_guard_condition(
    const rmw_guard_condition_t * rmw_guard_condition) {}