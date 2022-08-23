#ifndef ALTHACK_VISUALS_NODE_HPP_
#define ALTHACK_VISUALS_NODE_HPP_

// Standard
#include <string>

// ImGUI
#include <imgui.h>

namespace althack {
namespace visuals {

//! \brief Abstract base class for visual node elements.
class Node {
 public:
  Node(const std::string& identifier);

  const std::string& getIdentifier() const;

  virtual void draw(const ImVec2 position) = 0;

  virtual ImVec2 size() const = 0;

 private:
  const std::string identifier_;
};

}  // namespace visuals
}  // namespace althack

#endif  // ALTHACK_VISUALS_NODE_HPP_
