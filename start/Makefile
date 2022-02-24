
CFLAGS = -IC:/devl/glfw-3.3.5.bin.WIN64/include -IC:/devl/glfw-3.3.5.bin.WIN64/lib-vc2022  -IC:/devl/VulkanSDK/Include -IC:/devl/VulkanSDK/Lib -LC:/devl/VulkanSDK/Lib/ -IC:/devl/glm/
LFLAGS = -LC:/devl/glfw-3.3.5.bin.WIN64/lib-vc2022/glfw3.lib -LC:/devl/VulkanSDK/Lib/
LIBFLAG = -lglfw3 -lvulkan-1

a.exe: *.cpp *.hpp
	g++ $(CFLAGS) $(LFLAGS) -o a.exe *.cpp $(LIBFLAG)