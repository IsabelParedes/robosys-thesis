// Create a node and return a handle to that node.
rmw_node_t * rmw_create_node(
    rmw_context_t * context,
    const char * name,
    const char * namespace_) {}

// Finalize a given node handle, reclaim the resources, and deallocate the 
// node handle.
rmw_ret_t rmw_destroy_node(
    rmw_node_t * rmw_node) {}

// Return a guard condition which is triggered when the ROS graph changes.
const rmw_guard_condition_t * rmw_node_get_graph_guard_condition(
    const rmw_node_t * rmw_node) {}