# miniRT 이벤트 설명
## Event

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
---
## Event

> switch object

- `c key`: Switch Object to Camera
- `O key`: Swtich Object to Object

```
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

### ※ 이 아래부터의 이벤트는 이벤트 대상이 있을 때 동작한다.

> Transition

- `f key`: Move Forward
- `b key`: Move Backward
- `Left arrow key`: Move left
- `Right arrow key`: Move right
- `Up arrow key`: Move up
- `Down arrow key`: Move down

---

> Rotation

### Camera

- `p key`: 왼쪽 오른쪽으로 회전
- `t key`: 위 아래로 회전
- `Shift key`: 방향을 반대로 변경한다.

```
p key를 눌렀을 때 왼쪽으로 회전했었다면,
Shift key 이후에는 오른쪽으로 회전하게 된다.

마찬가지로 t key 를 눌렀을 때 위쪽으로 회전했었다면,
shift key 이후에는 아래쪽으로 회전하게 된다.

```

### Object

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