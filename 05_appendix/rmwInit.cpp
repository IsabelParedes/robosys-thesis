// Initialize given init_options with the default values and implementation 
// specific values.
rmw_ret_t rmw_init_options_init(
    rmw_init_options_t * init_options, 
    rcutils_allocator_t allocator) {}

// Copy the given source init options to the destination init options.
rmw_ret_t rmw_init_options_copy(
    const rmw_init_options_t * src, 
    rmw_init_options_t * dst) {}

// Finalize the given init_options.
rmw_ret_t rmw_init_options_fini(rmw_init_options_t * init_options) {}

// Initialize the middleware with the given options, and yielding an context.
rmw_ret_t rmw_init(
    const rmw_init_options_t * options, 
    rmw_context_t * context) {}

// Shutdown the middleware for a given context.
rmw_ret_t rmw_shutdown(rmw_context_t * context) {}

// Finalize a context.
rmw_ret_t rmw_context_fini(rmw_context_t * context) {}