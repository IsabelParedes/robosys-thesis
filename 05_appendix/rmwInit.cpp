// Initialize given init_options with the default values and implementation 
// specific values.
// The given allocator is used, if required, during setup of the init 
// options, but is also used during initialization.
// In either case the given allocator is stored in the returned init options.
// The impl pointer should not be changed manually.
rmw_ret_t rmw_init_options_init(
    rmw_init_options_t * init_options, 
    rcutils_allocator_t allocator) {}

// Copy the given source init options to the destination init options.
// The allocator from the source is used for any allocations and stored 
// in the destination.
// The destination should either be zero initialized with 
// rmw_get_zero_initialized_init_options() or should have had 
// rmw_init_options_fini() called on it. Giving an already initialized init 
// options for the destination will result in a failure with return code 
// RMW_RET_INVALID_ARGUMENT.
rmw_ret_t rmw_init_options_copy(
    const rmw_init_options_t * src, 
    rmw_init_options_t * dst) {}

// Finalize the given init_options.
// The given init_options must be non-NULL and valid, i.e. had 
// rmw_init_options_init() called on it but not this function yet.
rmw_ret_t rmw_init_options_fini(rmw_init_options_t * init_options) {}

// Initialize the middleware with the given options, and yielding an context.
// The given context must be zero initialized, and is filled with middleware 
// specific data upon success of this function. The context is used when 
// initializing some entities like nodes and guard conditions, and is also 
// required to properly call rmw_shutdown().
rmw_ret_t rmw_init(
    const rmw_init_options_t * options, 
    rmw_context_t * context) {}

// Shutdown the middleware for a given context.
// The given context must be a valid context which has been initialized 
// with rmw_init().
rmw_ret_t rmw_shutdown(rmw_context_t * context) {}

// Finalize a context.
// The context to be finalized must have been previously initialized with 
// rmw_init(), and then later invalidated with rmw_shutdown(). If context is 
// NULL, then RMW_RET_INVALID_ARGUMENT is returned. If context is 
// zero-initialized, then RMW_RET_INVALID_ARGUMENT is returned. 
// If context is initialized and valid (rmw_shutdown() was not called on it), 
// then RMW_RET_INVALID_ARGUMENT is returned.
rmw_ret_t rmw_context_fini(rmw_context_t * context) {}