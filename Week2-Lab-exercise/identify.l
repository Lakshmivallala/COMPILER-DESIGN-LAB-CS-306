%{ 
int flag = 0; 
%} 

%% 
[a|e|i|o|u|A|E|I|O|U] {printf("%s is a vowel\n", yytext); 
	flag++;}
.	 {printf("%s is a consonant\n", yytext);} 
\n {return 0;} 
%% 

int yywrap(){} 
int main(){ 
yylex();
return 0; 
} 
