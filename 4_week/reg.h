class Registration{
	public:
		bool input();
		void output();
		void setRecord(bool index);
		int getCode();
	private:
		bool checkCode(); 
		int code;
		bool attend;
};