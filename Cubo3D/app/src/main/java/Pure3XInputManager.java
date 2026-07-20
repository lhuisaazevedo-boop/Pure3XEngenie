package com.pure3x.engine;

import android.view.KeyEvent;
import android.view.MotionEvent;

public class Pure3XInputManager {

    private float touchX;
    private float touchY;

    private boolean touching;

    public void onTouch(MotionEvent event) {

        touchX = event.getX();
        touchY = event.getY();

        switch (event.getAction()) {

            case MotionEvent.ACTION_DOWN:
                touching = true;
                break;

            case MotionEvent.ACTION_UP:
                touching = false;
                break;
        }
    }

    public boolean onKey(KeyEvent event) {

        return event.getAction() == KeyEvent.ACTION_DOWN;
    }

    public float getTouchX() {
        return touchX;
    }

    public float getTouchY() {
        return touchY;
    }

    public boolean isTouching() {
        return touching;
    }

    public boolean isGamepad(KeyEvent event) {
        return event.getSource() == android.view.InputDevice.SOURCE_GAMEPAD;
    }

    public boolean isJoystick(MotionEvent event) {
        return (event.getSource() &
                android.view.InputDevice.SOURCE_JOYSTICK)
                == android.view.InputDevice.SOURCE_JOYSTICK;
    }
}
