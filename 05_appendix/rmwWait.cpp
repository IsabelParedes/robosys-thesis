

// Create a wait set to store conditions that the middleware will block on.
// This function can fail, and therefore return NULL, if:
//     context is NULL
//     context is invalid
//     memory allocation fails during wait set creation
//     an unspecified error occurs
// If max_conditions is 0, the wait set can store an unbounded number of 
// conditions to wait on. If max_conditions is greater than 0, the number 
// of conditions that can be attached to the wait set is bounded at 
// max_conditions.
rmw_wait_set_t * rmw_create_wait_set(
    rmw_context_t * context, 
        size_t max_conditions) {}

// Destroy and free memory of this wait_set. 
rmw_ret_t rmw_destroy_wait_set(rmw_wait_set_t * wait_set) {}

// Waits on sets of different waitable entities and returns when one is ready.
// Add conditions to the wait set and wait until a response comes in, or 
// until the timeout is reached. The arrays contain type-erased 
// representations of waitable entities. This function casts the pointers to 
// middleware-specific conditions and adds them to the wait set.
// The count variables in the arrays represents the number of valid pointers 
// in the array. NULL pointers are in the array considered invalid. If they 
// are encountered, an error is returned.
// The array structs are allocated and deallocated outside of this function. 
// They do not have any information about how much memory is allocated for 
// the arrays.
// After the wait wakes up, the entries in each array that correspond to 
// conditions that were not triggered are set to NULL.
rmw_ret_t rmw_wait(
    rmw_subscriptions_t * subscriptions,
    rmw_guard_conditions_t * guard_conditions,
    rmw_services_t * services,
    rmw_clients_t * clients,
    rmw_events_t * events,
    rmw_wait_set_t * wait_set,
    const rmw_time_t * wait_timeout) {}