package adapter_pattern;

public class AdapterImpl implements Adapter{

    //Math math;
    @Override
    public Float twiceOf(Float f) {

        //return Math.twoTime(f.doubleValue());
        return Math.doubled(f.doubleValue()).floatValue(); //이렇게 변경된 함수가 있다면 알고리즘만 변경해서 사용
    }

    @Override
    public Float halfOf(Float f) {
        System.out.println("half 함수 호출");
        return (float) Math.half(f.doubleValue());
    }
}
