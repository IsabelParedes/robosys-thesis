// Get the unique identifier of the publisher.
rmw_ret_t rmw_get_gid_for_publisher(
    const rmw_publisher_t * publisher,
    rmw_gid_t * gid) {}

// Check if two gid objects are the same.
rmw_ret_t rmw_compare_gids_equal(
    const rmw_gid_t * gid1,
    const rmw_gid_t * gid2,
    bool * result) {}