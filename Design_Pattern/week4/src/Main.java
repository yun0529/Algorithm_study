/* d
* Bridge Pattern
* 어댑터 패턴과 브릿지 패턴을 연결하여 이해
* 기능 , 키워드 부분을 분리한다.
* 기능 -> 추상적으로 어떤 기능을 사용할지 명시 , 그 기능을 재정의 하는 부분 필요
* 기능은 인터페이스에서 가져와서 동작한다?
*
* Composite Pattern
* 컴포짓 패턴으로 트리 구조를 구현할 수 있다.
* 컨테이너, 내용물을 동일시
* 컴포넌트 -> 동일시 하게 해주는 인터페이스
* leaf(트리), leaf를 담는 composite로 구성된다.
*
* Decorator Pattern
* 동적으로 책임 푸가가 필요한 경우 사용
* 인터페이스 (컴포턴트) : 실질적인 인스턴스를 컨트롤 하는 역할 (메소드들이 책임 부분)
* 컴포넌트 구현 : Component 의 실질적인 인스턴스 부분이며, 책임의 주체 역할 -> 컴포넌트가 컨트롤 하는 객체이다. 책임이 구현되어 있음.
* Decorator : 컴포넌트와 Concrete Decorator를 동일시 하도록 해준다. -> 컴포넌트가 될 수 있고, 컴포넌트를 가질 수 있다.
* Concrete Decorator : 실질적인 장식 인스턴스 및 정의이며, 추가된 책임의 주체부분이다.-> 추가된 책임을 갖고 있는 부분은 메소드이며 Concrete Decorator에 구현되어 있음.
 */

import bridge.DefaultMCF;
import bridge.SoundMCF;
import composite.Component;
import composite.File;
import composite.Folder;
import decorator.Base;
import decorator.Espresso;
import decorator.IBeverage;
import decorator.Milk;
import moss_no_bridge.MorseCode;
import bridge.PrintMoseCode;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        //no bridge
        //PrintMoseCode code = new PrintMoseCode();
//        code.g();
//        code.a();
//        code.r();
//        code.m();

        //code.g().a().r().m();

        //PrintMoseCode code2 = new PrintMoseCode(new DefaultMCF());
        PrintMoseCode code2 = new PrintMoseCode(new SoundMCF()); // 이렇게 인터페이스를 구현하는 모듈만 바꿔주면 다른 기기에서 하는 것 처럼 할 수 있음.  -> 기능과 구현 분리 // 많이 사용되지는 않음..
        code2.g().a().r().m();

        System.out.println("\n\n");

        Folder root = new Folder("root");
        Folder  home = new Folder("home");
        Folder  garam = new Folder("garam");
        Folder  music = new Folder("music");
        Folder  picture = new Folder("picture");
        Folder  doc = new Folder("doc");
        Folder  usr = new Folder("usr");
        File track1 = new File("track1");
        File track2 = new File("track2");
        File pic1 = new File("pic1");
        File doc1 = new File("doc1");
        File java = new File("java");

                root.addComponent(home);
                    home.addComponent(garam);
                        garam.addComponent(music);
                            music.addComponent(track1);
                            music.addComponent(track2);
                        garam.addComponent(picture);
                            picture.addComponent(pic1);
                        garam.addComponent(doc);
                            doc.addComponent(doc1);

                root.addComponent(usr);
                    usr.addComponent(java);
        show(root);

        Scanner sc = new Scanner(System.in);

        IBeverage beverage = new Base();
        boolean done = false;
        while(!done){
            System.out.println("음료 현재 가격 : "+beverage.getTotalPrice());
            System.out.println("선택 : 1 : 샷 추가 / 2 : 우유 추가");
2            switch (sc.nextInt()){
                case 0:
                    done = true;
                    break;
                case 1:
                    beverage = new Espresso(beverage);
                    break;
                case 2:
                    beverage = new Milk(beverage);
                    break;
            }
        }
        System.out.println("음료 가격 : " + beverage.getTotalPrice());
        sc.close();
    }
    private static void show(Component component){
        System.out.println(component.getClass().getName()+"|"+component.getName());
        if(component instanceof Folder){
            for(Component c : ((Folder)component).getChildren()){ // 폴더를 타고 들어가면서 파일까지 모두 보여줌
                show(c);
            }
        }
    }
}