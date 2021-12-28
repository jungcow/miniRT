# Mini Ray Tracing
## Overview - The Temple
![temple](https://user-images.githubusercontent.com/60311340/147248458-eb0099cf-8aa3-4bc8-a144-7e1a9d74d6fc.gif)

---
## Index
- [Directory Tree](#directory-tree)
- [Execution](#execution)
- [Camera with Sphere and Plane](#camera-with-sphere-and-plane)
- [Rotating Object](#rotating-object)
- [Event (key control)](#event-key-control)
---
## Directory tree
```shell
├── Makefile
├── README.md
├── includes
├── lib
│   ├── libft
│   ├── minilibx_mms_20200219(Provided)
│   └── minilibx_opengl_20191021(Provided)
├── main.c
├── scene
└── src
    ├── event
    ├── parsing
    │   ├── get_next_line
    │   └── validate
    ├── trace
    ├── utils
    ├── vec
    └── world
        └── create
```
---
## Execution
```shell
make && make clean
./miniRT scene/[any rt file]
```
---
## Camera with Sphere and Plane
|Up and Down|Backward and Forward|Rotate with Pan|Rotate with Tilt|Object Transition|Camera Switching|
:-------------------------:|:-------------------------:|:-------------------------:|:-------------------------:|:-------------------------:|:-------------------------:
|![camera_up_and_down](https://user-images.githubusercontent.com/60311340/147249009-92aec9c1-53de-4845-af74-ba9facb151cb.gif)|![camera_back_forward](https://user-images.githubusercontent.com/60311340/147249016-221ee5ae-6807-482f-a5eb-fa13c02ac82e.gif)|![camera_rotate_pan](https://user-images.githubusercontent.com/60311340/147249026-19db7408-8710-4e2b-85d9-a0d083e9424c.gif)|![camera_rotate_tilt](https://user-images.githubusercontent.com/60311340/147249031-7dfb391d-2cb3-49ec-925b-8e040d1dc26f.gif)|![object_transition](https://user-images.githubusercontent.com/60311340/147249041-8243c7ac-d4bf-4796-9163-ac37b645226b.gif)|![camera_switching](https://user-images.githubusercontent.com/60311340/147249048-91fa2cf4-dc0f-4773-af07-2eaebc114689.gif)|


## Rotating Object
|Object|X axis|Y axis|Z axis|
:-------------------------:|:-------------------------:|:-------------------------:|:-------------------------:
|Triangle|![triangle_x_rotate](https://user-images.githubusercontent.com/60311340/147248551-30e2a0e6-c342-494c-8844-e480893f929a.gif)|![triangle_y_rotate](https://user-images.githubusercontent.com/60311340/147248561-d4d83187-83e7-4acf-857b-07256e7ad28a.gif)|![triangle_z_rotate](https://user-images.githubusercontent.com/60311340/147248565-f6032ded-2dcc-4595-9c0d-c3e54dc05abd.gif)|
|Square|![square_x_rotate](https://user-images.githubusercontent.com/60311340/147248569-a4552d00-967a-4316-ab32-afb3236d185b.gif)|![square_y_rotate](https://user-images.githubusercontent.com/60311340/147248573-89758f0e-994f-405e-a0bb-ae436145b442.gif)|![square_z_rotate](https://user-images.githubusercontent.com/60311340/147248574-8f97ba88-3435-4ca2-8843-e13e4ce416ee.gif)|
|Cylinder|![cylinder_x_rotate](https://user-images.githubusercontent.com/60311340/147248581-682adc0b-6325-497a-8c78-d83a6f33c371.gif)|![cylinder_y_rotate](https://user-images.githubusercontent.com/60311340/147248582-bc355878-b8b9-4269-aca8-ae006e47531f.gif)|![cylinder_z_rotate](https://user-images.githubusercontent.com/60311340/147248585-e965b24e-8314-4723-a3c8-6c8ba942a372.gif)|

---
## Event (key control)

> switch object
- `c key`: Switch Object to Camera
- `O key`: Swtich Object to Object

```shell
# 맨 처음 아무 event object가 설정이 안되어있을 떄,
- press c key: event 대상을 "카메라"로 지정한다.
- press o key: event 대상을 "물체"로 지정한다.


# event 대상이 카메라로 지정이 된 상태일 떄
- press c key: event 대상을 "그 다음 카메라" 로 이동한다.(시점 변경)
(카메라가 1개밖에 없을 땐, 아무 일도 일어나지 않는다.)
- press o key: event 대상을 카메라에서 물체로 변경한다.


# event 대상이 물체로 지정이 된 상태일 때
- press c key: event 대상을 "물체에서 카메라"로 변경한다.
- press o key: event 대상을 "그 다음 물체"로 이동한다.(물체 변경)
```
---

#### ※ 이 아래부터의 이벤트는 이벤트 대상이 있을 때 동작한다.
> Transition
- `f key`: Move Forward
- `b key`: Move Backward
- `Left arrow key`: Move left
- `Right arrow key`: Move right
- `Up arrow key`: Move up
- `Down arrow key`: Move down
---

> Rotation
##### Camera
- `p key`: 왼쪽 오른쪽으로 회전
- `t key`: 위 아래로 회전
- `Shift key`: 방향을 반대로 변경한다.
```shell
p key를 눌렀을 때 왼쪽으로 회전했었다면, 
Shift key 이후에는 오른쪽으로 회전하게 된다.

마찬가지로 t key 를 눌렀을 때 위쪽으로 회전했었다면,
shift key 이후에는 아래쪽으로 회전하게 된다.
```
##### Object
- `x key`: x축 방향으로 회전
- `y key`: y축 방향으로 회전
- `z key`: z축 방향으로 회전
---

> Scale
- `e key`: expand의 e를 딴 것으로, 물체의 크기를 크게 한다.
- `r key`: reduce의 r을 딴 것으로, 물체의 크기를 작게 한다.
---

> Terminate Program
- `ESC key`: 프로그램을 종료한다.
- `Click red cross button`: 프로그램을 종료한다.
## 문서(Documents)
1. [window 창 여는 방법 && 픽셀에 색칠하는 방법](https://github.com/jungcow/42Cursus/wiki/20210304%2528%25EB%25AA%25A9%2529)
2. [벡터: 반직선, 뺄셈, 내적, 외적, 직선 사이의 거리, 회전](https://github.com/jungcow/42Cursus/wiki/20210305%2528%25EA%25B8%2588%2529)
3. [mlx 라이브러리의 사용법과 여러 좌표계](https://github.com/jungcow/42Cursus/wiki/20210308%2528%25EC%259B%2594%2529)
4. [벡터 & 행렬의 용어 및 공식](https://github.com/jungcow/42Cursus/wiki/20210309%2528%25ED%2599%2594%2529)
5. [아핀변환과 선형변환의 관계](https://github.com/jungcow/42Cursus/wiki/20210310%2528%25EC%2588%2598%2529)
6. [좌표계 변환에 대한 이해 & 사영기하학 및 변환](https://github.com/jungcow/42Cursus/wiki/20210312%2528%25EA%25B8%2588%2529)
7. [ray 생성 & sphere 충돌 렌더링](https://github.com/jungcow/42Cursus/wiki/20210314%2528%25EC%259D%25BC%2529)
8. [shading 관련 학습](https://github.com/jungcow/42Cursus/wiki/202103015%2528%25EC%259B%2594%2529)
9. [phong shading](https://github.com/jungcow/42Cursus/wiki/20210316%2528%25ED%2599%2594%2529)
10. [camera to world 좌표계 변환](https://github.com/jungcow/42Cursus/wiki/20210317%2528%25EC%2588%2598%2529)
11. [초기 코드 구조 구성](https://github.com/jungcow/42Cursus/wiki/20210318%2528%25EB%25AA%25A9%2529)
12. [코드 구조: 충돌 부분](https://github.com/jungcow/42Cursus/wiki/20210319%2528%25EA%25B8%2588%2529)
13. [코드 구조: rt 파일의 validation & parsing 부분](https://github.com/jungcow/42Cursus/wiki/20210322%2528%25EC%259B%2594%2529)
14. [코드 구현: rt 파일의 validation 부분](https://github.com/jungcow/42Cursus/wiki/20210323%2528%25ED%2599%2594%2529)
15. [코드 구조: 월드 생성 부분](https://github.com/jungcow/42Cursus/wiki/20210324%2528%25EC%2588%2598%2529)
16. [코드 구현: 월드 생성 부분](https://github.com/jungcow/42Cursus/wiki/20210325%2528%25EB%25AA%25A9%2529)
17. [코드 구현: sphere 충돌 & shading 로직 부분](https://github.com/jungcow/42Cursus/wiki/202103026%2528%25EA%25B8%2588%2529)
18. [카메라 변환 metrix 부분](https://github.com/jungcow/42Cursus/wiki/20210405%2528%25EC%259B%2594%2529)
19. [코드 구현: 평면 충돌 & shading 로직 & bias 부분](https://github.com/jungcow/42Cursus/wiki/20210406%2528%25ED%2599%2594%2529)
20. [코드 구현: 삼각형 & 사각형의 충돌 로직 부분](https://github.com/jungcow/42Cursus/wiki/20210407%2528%25EC%2588%2598%2529)
21. [코드 구현: 실린더 충돌 로직 부분 ](https://github.com/jungcow/42Cursus/wiki/20210409%2528%25EA%25B8%2588%2529)
