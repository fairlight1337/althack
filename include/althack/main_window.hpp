#ifndef ALTHACK_MAINWINDOW_HPP_
#define ALTHACK_MAINWINDOW_HPP_

#include <string>

#include <spdlog/spdlog.h>

#include <imgui.h>
#include <imgui_impl_sdl.h>
#include <imgui_impl_sdlrenderer.h>

#include <SDL.h>

namespace althack {

class MainWindow {
 public:
  // ...
  MainWindow();

  // ...
  bool setup(const std::string& title, uint32_t width, uint32_t height);

  // ...
  bool processIo();

  // ...
  bool render();

  // ...
  bool teardown();

  // ...
  std::string getSdlVersionCompiled() const;

  // ...
  std::string getSdlVersionLinked() const;

 private:
  void canvas(const std::string& identifier, ImVec2 size);

  SDL_Window* window_;
  SDL_Renderer* renderer_;
};

}  // namespace althack

#endif  // ALTHACK_MAINWINDOW_HPP_
