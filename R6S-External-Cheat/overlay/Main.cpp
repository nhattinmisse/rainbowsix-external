��/ /   M a i n . c p p   :   D e f i n e s   t h e   e n t r y   p o i n t   f o r   t h e   c o n s o l e   a p p l i c a t i o n .  
 / /  
  
 # i n c l u d e   " s t d a f x . h "  
 # i n c l u d e   " G l o b a l s . h "  
 # i n c l u d e   " U t i l i t y . h "  
 # i n c l u d e   " M e m o r y . h "  
 # i n c l u d e   " O v e r l a y . h "  
 # i n c l u d e   < i o s t r e a m >  
 # i n c l u d e   < t i m e . h >  
 # i n c l u d e   < P s a p i . h >  
  
  
 H W N D   g a m e W i n d o w   =   F i n d W i n d o w ( N U L L ,   L " R a i n b o w   S i x " ) ;  
  
 / / D e f i n i n g   o u r   g l o b a l s  
 n a m e s p a c e   G l o b a l   {  
 	 H A N D L E   G a m e H a n d l e   =   0 x 0 ;  
 	 i n t   I D ;  
 	 L P V O I D   B a s e A d d r e s s   =   N U L L ;  
  
 	 s t d : : s t r i n g   L o c a l N a m e   =   " " ;  
  
 	 M e m o r y y y   M e m o r y   =   M e m o r y y y ( ) ;  
  
 	 O v e r l a y y y   O v e r   =   O v e r l a y y y ( ) ;  
  
 	 B O O L   A i m b o t   =   F A L S E ;  
 	  
 	 B O O L   S p r e a d   =   F A L S E ;  
  
 	 B O O L   R e c o i l   =   F A L S E ;  
 }  
  
 s t a t i c   c o n s t   c h a r   c o n s o l e N a m e A l p h a n u m [ ]   =   " 1 2 3 4 5 6 7 8 9 0 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z a b c d e f g h i j k l m n o p q r s t u v w x y z " ;  
  
 i n t   c o n s o l e N a m e L e n g t h   =   s i z e o f ( c o n s o l e N a m e A l p h a n u m )   -   1 ;  
  
 c h a r   g e n R a n d o m C o n s o l e N a m e ( )  
 {  
 	 r e t u r n   c o n s o l e N a m e A l p h a n u m [ r a n d ( )   %   c o n s o l e N a m e L e n g t h ] ;  
 }  
  
 i n t   m a i n ( )  
 {  
 	 s r a n d ( t i m e ( 0 ) ) ;  
 	 s t d : : w s t r i n g   C o n s o l e N a m e S t r ;  
 	 f o r   ( u n s i g n e d   i n t   i   =   0 ;   i   <   2 0 ;   + + i )  
 	 {  
 	 	 C o n s o l e N a m e S t r   + =   g e n R a n d o m C o n s o l e N a m e ( ) ;  
  
 	 }  
 	 S e t C o n s o l e T i t l e ( C o n s o l e N a m e S t r . c _ s t r ( ) ) ;  
 	 s t d : : c o u t   < <   " S i e g e   E x t e r n a l "   < <   s t d : : e n d l ;  
 	 s t d : : c o u t   < <   " - - - - - "   < <   s t d : : e n d l ;  
 	 i f   ( g a m e W i n d o w   ! =   0 )   {  
 	 	 s t d : : c o u t   < <   " G a m e   w i n d o w   f o u n d "   < <   s t d : : e n d l ;  
  
 	 	 s t d : : c o u t   < <   " E n e t e r   y o u r   i n g a m e   n a m e :   "   < <   s t d : : f l u s h ;  
 	 	 s t d : : c i n   > >   G l o b a l : : L o c a l N a m e ;  
 	 	 / / G l o b a l : : L o c a l N a m e   =   " T h e W i s e R 6 M a n " ;  
 	 	 S l e e p ( 1 0 0 0 ) ;  
  
 	 	    
 	 	 s t d : : s t r i n g   c o n f i r m a t i o n ;  
  
 	 	 / / s t d : : c o u t   < <   " C o n f i r m   [ Y ] / [ N ] :   "   < <   s t d : : f l u s h ;  
 	 	 / / s t d : : c i n   > >   c o n f i r m a t i o n ;  
 	 	 c o n f i r m a t i o n   =   " Y " ;  
 	 	 i f   ( c o n f i r m a t i o n   = =   " Y " )   {  
 	 	 	 G l o b a l : : M e m o r y . S e t B a s e A d d r e s s ( ) ;  
  
 	 	 	 G l o b a l : : O v e r . S e t u p W i n d o w ( ) ;  
 	 	 	 s t d : : c o u t   < <   " O v e r l a y   w i n d o w   s e t "   < <   s t d : : e n d l ;  
  
 	 	 	 / / S t a r t   t h e   m a i n   l o o p  
 	 	 	 G l o b a l : : O v e r . L o o p ( ) ;  
  
 	 	 	 s y s t e m ( " p a u s e " ) ;  
 	 	 	 r e t u r n   E X I T _ S U C C E S S ;  
  
 	 	 	 r e t u r n   0 ;  
 	 	 }  
 	 	 e l s e   {  
 	 	 	 s t d : : c o u t   < <   " C l o s i n g . . . "   < <   s t d : : e n d l ;  
 	 	 	 S l e e p ( 2 0 0 0 ) ;  
 	 	 }  
 	 	 r e t u r n   0 ;  
 	 }  
 	 e l s e   {  
 	 	 s t d : : c o u t   < <   " G a m e   m u s t   b e   r u n n i n g   t o   c o n t i n u e . "   < <   s t d : : e n d l ;  
 	 	 s t d : : c o u t   < <   " "   < <   s t d : : e n d l ;  
 	 	 s y s t e m ( " p a u s e " ) ;  
 	 	 r e t u r n   0 ;  
 	 }  
 }  
 