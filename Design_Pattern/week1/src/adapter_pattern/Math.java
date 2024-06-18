package adapter_pattern;

public class Math {

    //두배
    public static double twoTime(double num){return num*2;}
    //절반
    public static double half(double num){
        // 여기 삽입 하면 다른 해당 라이브러리를 사용하는 사용자들에게도 로그가 보임 따라서 여기서 사용 X

        // 만약 정렬함수를 받았는데 배열로 되어있다면
        // list -> array로 바꿔서 sort ~  하고 list로 바꾸는 등... 이런식으로 사용

        //System.out.println("half 함수 호출");
        return num/2;
    }

    //강화된 알고리즘
    public static Double doubled(Double d){return d*2;}

}
