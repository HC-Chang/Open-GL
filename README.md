# Open-GL
Open GL - MSVS 2019

## Environment Setting

1. Download MSVS
1. Download [GLFW] - Windows pre-compiled binaries
1. Download [GLAD] - Profile: Core
1. Open MSVS and Create projects and solutions - C++ Empty Project
1. Set include path - 專案屬性 > 組態屬性 > VC++目錄 > 一般 > Include 目錄
1. Set lib path - 專案屬性 > 組態屬性 > 連結器 > 一般 > 其他程式庫目錄
1. Create project dependencies - 專案屬性 > 組態屬性 > 連結器 > 輸入 > 其他相依性 - opengl32.lib、glfw3.lib
1. Add glad.c - In "GLAD" File
1. Add main.cpp - [Example Code]
1. Run code

---
Ref: 
- [OpenGL setup for visual studio 2019]
- [LearnOpenGL CN] - [GLFW]、[GLAD]
- [john.87.connor] - [GLFW]、GLEW、GLM、SOIL

[GLFW]: https://www.glfw.org/download.html
[GLAD]: https://glad.dav1d.de/

[Example Code]: https://www.glfw.org/documentation.html

[OpenGL setup for visual studio 2019]: https://www.youtube.com/watch?v=kGupc_M5o10
[LearnOpenGL CN]: https://learnopengl-cn.github.io/
[john.87.connor]: https://sites.google.com/site/john87connor/home