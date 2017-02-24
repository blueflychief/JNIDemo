package infinite.com.jnidemo;

import android.graphics.Color;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.widget.TextView;

import infinite.com.jnidemo.jniClazz.TestString;

public class MainActivity extends AppCompatActivity {

    static {
        System.loadLibrary("HelloWorld");// 加载库，前面的lib和，后缀名不用写
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        TextView tv = new TextView(this);
        tv.setTextSize(30);
        tv.setTextColor(Color.BLUE);
        tv.setText(TestString.helloWorldFromJNI());
        setContentView(tv);
    }


}
