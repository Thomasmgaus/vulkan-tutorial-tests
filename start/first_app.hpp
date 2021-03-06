#ifndef FIRST_APP_HPP
#define FIRST_APP_HPP
#pragma once

#include "lve_window.hpp"
#include "lve_pipeline.hpp"

namespace lve
{
    class FirstApp
    {
    public:
        static constexpr int WIDTH = 800;
        static constexpr int HEIGHT = 800;

        void run();

    private:
        LveWindow lveWindow{WIDTH, HEIGHT, "Hello Vulkan!"};
        LvePipeline lvePipeline{"shaders/simple_shader.vert.spv", "shaders/simple_shader.frag.spv"};
    };
} //namespace lve

#endif