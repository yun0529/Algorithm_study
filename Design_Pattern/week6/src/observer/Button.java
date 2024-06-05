package observer;

public class Button {

    public void onClick(){
        // 클릭 이벤트 처리
        onClickListener.onClick(this);
    }

    public interface OnClickListener{
        public void onClick(Button button);
    }
    private OnClickListener onClickListener;

    public void setOnClickListener(OnClickListener onClickListener){
        this.onClickListener = onClickListener;
    }
}
