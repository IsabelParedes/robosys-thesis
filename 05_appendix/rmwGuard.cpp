// Create a guard condition and return a handle to that guard condition.
// This function can fail, and therefore return NULL, if:
//     context is NULL
//     context is invalid
//     memory allocation fails during guard condition creation
//     an unspecified error occurs
// The context must be non-null and valid, i.e. it has been initialized 
// by rmw_init() and has not been finalized by rmw_shutdown().
rmw_guard_condition_t * rmw_create_guard_condition(rmw_context_t * context) {}

// Finalize a given guard condition handle, reclaim the resources, 
// and deallocate the handle. 
rmw_ret_t rmw_destroy_guard_condition(
    rmw_guard_condition_t * rmw_guard_condition) {}

// Trigger guard condition
rmw_ret_t rmw_trigger_guard_condition(
    const rmw_guard_condition_t * rmw_guard_condition) {}