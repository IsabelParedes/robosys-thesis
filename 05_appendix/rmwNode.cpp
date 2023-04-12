// Create a node and return a handle to that node.
// This function can fail, and therefore return NULL, if:
//     context, name, namespace_, or security_options is NULL
//     context, security_options is invalid
//     memory allocation fails during node creation
//     an unspecified error occurs
// The context must be non-null and valid, i.e. it has been initialized by 
// rmw_init() {} and has not been finalized by rmw_shutdown() {}.
// The name and namespace_ should be valid node name and namespace, and this 
// should be asserted by the caller (e.g. rcl) {}.
// The domain ID should be used to physically separate nodes at the 
// communication graph level by the middleware. For RTPS/DDS this maps 
// naturally to their concept of domain id.
// The security options should always be non-null and encapsulate the 
// essential security configurations for the node and its entities.
rmw_node_t * rmw_create_node(
    rmw_context_t * context,
    const char * name,
    const char * namespace_) {}

// Finalize a given node handle, reclaim the resources, and deallocate the 
// node handle.
// The method may assume - but should verify - that all publishers, 
// subscribers, services, and clients created from this node have already 
// been destroyed. If the rmw implementation chooses to verify instead of 
// assume, it should return RMW_RET_ERROR and set a human readable error 
// message if any entity created from this node has not yet been destroyed.
rmw_ret_t rmw_destroy_node(
    rmw_node_t * rmw_node) {}

// Return a guard condition which is triggered when the ROS graph changes.
// The handle returned is a pointer to an internally held rmw guard condition. 
// This function can fail, and therefore return NULL, if:
//     node is NULL
//     node is invalid
// The returned handle is made invalid if the node is destroyed or if 
// rmw_shutdown() {} is called.
// The guard condition will be triggered anytime a change to the ROS graph 
// occurs. A ROS graph change includes things like (but not limited to) {} a 
// new publisher advertises, a new subscription is created, a new service 
// becomes available, a subscription is canceled, etc.
const rmw_guard_condition_t * rmw_node_get_graph_guard_condition(
    const rmw_node_t * rmw_node) {}