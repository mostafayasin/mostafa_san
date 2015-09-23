TACK_MAX 5

struct Stack {
    int     data[STACK_MAX];
        int     size;
	};
	//typedef struct Stack STACK;
	//STACK s;
	Stack s;

	void Stack_Init()
	{
	     s.size = 0;
	     }

	     int Stack_Top()
	     {
	         if (s.size == 0) {
		         fprintf(stderr, "Error: stack empty\n");
			         return -1;
				     } 

				         return s.data[s.size];
					 }

					 void Stack_Push(int d)
					 { 
					     if (s.size < STACK_MAX)
					         	{
							    		s.size++;
												s.data[s.size] = d;
														}
														        
															    else
															            fprintf(stderr, "Error: stack full\n");
																    }

																    int Stack_Pop()
																    {
																    	int t;
																	    if (s.size == 0)
																	            fprintf(stderr, "Error: stack empty\n");
																		        else
																			    	t = s.data[s.size];
																				    	s.size--;
																					    	return t;
																						}
