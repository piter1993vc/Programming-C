#ifndef HEADER_UNIVERSAL_
#define HEADER_UNIVERSAL_

#define ENTER putchar('\n') /*enter w pliku*/
#define SPACE putchar(' ') /*spacja w pliku*/
#define CLEAR while(getchar()!='\n)continue  /*czysci strumien*/
#define INFO printf("date : %s,time: %s, file: %s, line: %d\n",__DATE__,__TIME__,__FILE__,__LINE__) /*info ogolne*/


#endif
