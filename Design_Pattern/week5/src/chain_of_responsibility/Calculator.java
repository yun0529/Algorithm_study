package chain_of_responsibility;

public abstract class Calculator {

    private Calculator nextCalculator;
    public void setNextCalculator(Calculator nextCalculator) {
        this.nextCalculator = nextCalculator;
    }

    public boolean process(Request request) {

        // 처리하는 순서는 변경할 수 있음, ex) nextCalculator를 먼저 하고 그 다음에 자신을 진행
        //if(preCalculator != null{
            //if(preCalculator.process(request)){
                // return true;
                //}
            //return operator(request);
        //}
        if (operator(request)){
            // operator 호출하여 내가 했다 하면 true
            return true;
        }else{
            if(nextCalculator != null){
                return nextCalculator.process(request); //아니라면 nextCalculator의 프로세스를 호출
            }
            return false;
        }
    }

    abstract protected boolean operator(Request request); // 동작
}
