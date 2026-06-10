#ifndef PLANNER_TEMPLATE_H
#define PLANNER_TEMPLATE_H

#include <octomap/octomap.h>
#include <pairs_lib/batch_visualizer.h>

namespace pairs_octomap_planner
{

enum TreeValue
{
  FREE     = 0,
  OCCUPIED = 1,
  UNKNOWN  = -1
};

using OctreeNode = octomap::OcTreeDataNode<TreeValue>;
using OctreeT    = octomap::OcTreeBase<OctreeNode>;

template <class VectorType, class Oc>
class AbstractPlanner<T> {

public:
  std::vector<T> findPath(T &start, T &goal);

protected:
  pairs_lib::BatchVisualizer bv_;
};

}  // namespace pairs_octomap_planner

#endif
