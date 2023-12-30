  /**--------------------------------------------------------**/
  /**       C o n v e r s i o n   Z vers C (Standard)        **/
  /**             Réalisée par Pr D.E ZEGOUR                 **/
  /**             E S I - Alger                              **/
  /**             Copywrite 2014                             **/
  /**--------------------------------------------------------**/

  #include <stdio.h>
  #include <stdlib.h>

  typedef int bool ;
  typedef char * string255 ;
  typedef char * string2 ;

  #define True 1
  #define False 0

  /** Implémentation **\: TABLEAU DE ARBRES BINAIRES DE STRUCTURES**/

  /** Structures statiques **/

  typedef struct Tssic Type_Tssic  ;
  typedef Type_Tssic * Typestr_Tssic ;
  typedef string255 Type1_Tssic  ;
  typedef string255 Type2_Tssic  ;
  typedef int Type3_Tssic  ;
  typedef string2 Type4_Tssic  ;
  struct Tssic
    {
      Type1_Tssic Champ1 ;
      Type2_Tssic Champ2 ;
      Type3_Tssic Champ3 ;
      Type4_Tssic Champ4 ;
    };

  Type1_Tssic Struct1_Tssic ( Typestr_Tssic S)
    {
      return  S->Champ1 ;
    }

  Type2_Tssic Struct2_Tssic ( Typestr_Tssic S)
    {
      return  S->Champ2 ;
    }

  Type3_Tssic Struct3_Tssic ( Typestr_Tssic S)
    {
      return  S->Champ3 ;
    }

  Type4_Tssic Struct4_Tssic ( Typestr_Tssic S)
    {
      return  S->Champ4 ;
    }

  void Aff_struct1_Tssic ( Typestr_Tssic S, Type1_Tssic Val )
    {
      strcpy( S->Champ1 , Val );
    }

  void Aff_struct2_Tssic ( Typestr_Tssic S, Type2_Tssic Val )
    {
      strcpy( S->Champ2 , Val );
    }

  void Aff_struct3_Tssic ( Typestr_Tssic S, Type3_Tssic Val )
    {
       S->Champ3 = Val ;
    }

  void Aff_struct4_Tssic ( Typestr_Tssic S, Type4_Tssic Val )
    {
      strcpy( S->Champ4 , Val );
    }


  /** Arbres de recherche binaire **/

  typedef Typestr_Tssic Typeelem_ATssic   ;
  typedef struct Noeud_ATssic * Pointeur_ATssic ;

  struct Noeud_ATssic
    {
      Typeelem_ATssic  Val ;
      Pointeur_ATssic Fg ;
      Pointeur_ATssic Fd ;
      Pointeur_ATssic Pere ;
     } ;

  Typeelem_ATssic Info_ATssic( Pointeur_ATssic P )
    { return P->Val;   }

  Pointeur_ATssic Fg_ATssic( Pointeur_ATssic P)
    { return P->Fg ; }

  Pointeur_ATssic Fd_ATssic( Pointeur_ATssic P)
    { return P->Fd ; }

  Pointeur_ATssic Pere_ATssic( Pointeur_ATssic P)
    { return P->Pere ; }

  void Aff_info_ATssic ( Pointeur_ATssic P, Typeelem_ATssic Val)
    {
      Typeelem_ATssic _Temp ;
      _Temp = malloc(sizeof(Type_Tssic));
      _Temp->Champ1 = malloc(255 * sizeof(char));
      _Temp->Champ2 = malloc(255 * sizeof(char));
      _Temp->Champ4 = malloc(2 * sizeof(char));
      /* Affectation globale de structure */
      strcpy(_Temp->Champ1, Val->Champ1);
      strcpy(_Temp->Champ2, Val->Champ2);
      _Temp->Champ3 = Val->Champ3;
      strcpy(_Temp->Champ4, Val->Champ4);
      Val = _Temp ;
       P->Val = Val ;
    }

  void Aff_fg_ATssic( Pointeur_ATssic P, Pointeur_ATssic Q)
    { P->Fg =  Q;  }

  void Aff_fd_ATssic( Pointeur_ATssic P, Pointeur_ATssic Q)
    { P->Fd =  Q ; }

  void Aff_pere_ATssic( Pointeur_ATssic P, Pointeur_ATssic Q)
    { P->Pere =  Q ; }

  void Creernoeud_ATssic( Pointeur_ATssic *P)
    {
      *P = (struct Noeud_ATssic *) malloc( sizeof( struct Noeud_ATssic))   ;
      (*P)->Val = malloc(sizeof(Type_Tssic));
      (*P)->Val->Champ1 = malloc( 255 * sizeof(char));
      (*P)->Val->Champ2 = malloc( 255 * sizeof(char));
      (*P)->Val->Champ4 = malloc( 2 * sizeof(char));
      (*P)->Fg = NULL;
      (*P)->Fd = NULL;
      (*P)->Pere = NULL;
    }

  void Liberernoeud_ATssic( Pointeur_ATssic P)
    { free( P ) ; }


  /** Tableaux **/

  typedef Pointeur_ATssic Typeelem_V10ATssic ;
  typedef Typeelem_V10ATssic * Typevect_V10ATssic ;

  Typeelem_V10ATssic Element_V10ATssic ( Typevect_V10ATssic V , int I1  )
    {
      return  *(V + I1-1 ) ;
    }

  void Aff_element_V10ATssic ( Typevect_V10ATssic V  , int I1 ,  Typeelem_V10ATssic Val )
    {
      *(V + I1-1 ) = Val ;
    }


  /** Implémentation **\: ARBRE BINAIRE DE STRUCTURES**/

  /** Structures statiques **/

  typedef struct Tiic Type_Tiic  ;
  typedef Type_Tiic * Typestr_Tiic ;
  typedef int Type1_Tiic  ;
  typedef int Type2_Tiic  ;
  typedef string2 Type3_Tiic  ;
  struct Tiic
    {
      Type1_Tiic Champ1 ;
      Type2_Tiic Champ2 ;
      Type3_Tiic Champ3 ;
    };

  Type1_Tiic Struct1_Tiic ( Typestr_Tiic S)
    {
      return  S->Champ1 ;
    }

  Type2_Tiic Struct2_Tiic ( Typestr_Tiic S)
    {
      return  S->Champ2 ;
    }

  Type3_Tiic Struct3_Tiic ( Typestr_Tiic S)
    {
      return  S->Champ3 ;
    }

  void Aff_struct1_Tiic ( Typestr_Tiic S, Type1_Tiic Val )
    {
       S->Champ1 = Val ;
    }

  void Aff_struct2_Tiic ( Typestr_Tiic S, Type2_Tiic Val )
    {
       S->Champ2 = Val ;
    }

  void Aff_struct3_Tiic ( Typestr_Tiic S, Type3_Tiic Val )
    {
      strcpy( S->Champ3 , Val );
    }


  /** Arbres de recherche binaire **/

  typedef Typestr_Tiic Typeelem_ATiic   ;
  typedef struct Noeud_ATiic * Pointeur_ATiic ;

  struct Noeud_ATiic
    {
      Typeelem_ATiic  Val ;
      Pointeur_ATiic Fg ;
      Pointeur_ATiic Fd ;
      Pointeur_ATiic Pere ;
     } ;

  Typeelem_ATiic Info_ATiic( Pointeur_ATiic P )
    { return P->Val;   }

  Pointeur_ATiic Fg_ATiic( Pointeur_ATiic P)
    { return P->Fg ; }

  Pointeur_ATiic Fd_ATiic( Pointeur_ATiic P)
    { return P->Fd ; }

  Pointeur_ATiic Pere_ATiic( Pointeur_ATiic P)
    { return P->Pere ; }

  void Aff_info_ATiic ( Pointeur_ATiic P, Typeelem_ATiic Val)
    {
      Typeelem_ATiic _Temp ;
      _Temp = malloc(sizeof(Type_Tiic));
      _Temp->Champ3 = malloc(2 * sizeof(char));
      /* Affectation globale de structure */
      _Temp->Champ1 = Val->Champ1;
      _Temp->Champ2 = Val->Champ2;
      strcpy(_Temp->Champ3, Val->Champ3);
      Val = _Temp ;
       P->Val = Val ;
    }

  void Aff_fg_ATiic( Pointeur_ATiic P, Pointeur_ATiic Q)
    { P->Fg =  Q;  }

  void Aff_fd_ATiic( Pointeur_ATiic P, Pointeur_ATiic Q)
    { P->Fd =  Q ; }

  void Aff_pere_ATiic( Pointeur_ATiic P, Pointeur_ATiic Q)
    { P->Pere =  Q ; }

  void Creernoeud_ATiic( Pointeur_ATiic *P)
    {
      *P = (struct Noeud_ATiic *) malloc( sizeof( struct Noeud_ATiic))   ;
      (*P)->Val = malloc(sizeof(Type_Tiic));
      (*P)->Val->Champ3 = malloc( 2 * sizeof(char));
      (*P)->Fg = NULL;
      (*P)->Fd = NULL;
      (*P)->Pere = NULL;
    }

  void Liberernoeud_ATiic( Pointeur_ATiic P)
    { free( P ) ; }


  /** Variables du programme principal **/
  Typevect_V10ATssic Tab;
  Pointeur_ATssic R1;
  Typestr_Tssic S;
  Pointeur_ATiic R2;
  int I;
  int Cp1;
  int Cp2;
  int Result;
  int N1;
  int N2;
  string2 Ca;

  /** Fonctions standards **/

  int Aleanombre( int N )
    { return ( rand() % N ); }

  char  *Aleachaine ( int N )
    {
      int k;
      char  * Chaine = malloc(N+1);

      char Chr1[26] = "abcdefghijklmnopqrstuvwxyz";
      char Chr2[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

      for (k=0;k<N; k++)
        switch ( rand() % 2 ){
        case 0 :  *(Chaine+k) = Chr1[rand() % 26] ; break ;
        case 1 :  *(Chaine+k) = Chr2[rand() % 26] ; break ;
        }
      Chaine[k] =  '\0' ;

      return (Chaine);
    }


  /** Initialisation d'une structure **/
  void Init_struct_Tssic ( Typestr_Tssic S, Type_Tssic S_ )
    {
      strcpy( S->Champ1 , S_.Champ1 );
      strcpy( S->Champ2 , S_.Champ2 );
      S->Champ3 = S_.Champ3 ;
      strcpy( S->Champ4 , S_.Champ4 );
    }


  /** Prototypes des fonctions **/

  void Insert_arbre (Pointeur_ATssic *C , Typestr_Tssic *S);
  string2  Random_res (int *Stat) ;
  void Remplir_struct (Typevect_V10ATssic *T , Pointeur_ATssic *R , Typestr_Tssic *S);
  void Afficher_struct (int *I , Typevect_V10ATssic *T , Pointeur_ATssic *R);
  void Inordre (Pointeur_ATssic *R);
  void New_tree (Typevect_V10ATssic *T , int *I , Pointeur_ATiic *Tree);
  void Inordreinsert (Pointeur_ATssic *A , Pointeur_ATiic *B);
  void Inserer2 (Pointeur_ATiic *A , Typestr_Tssic *K);
  void Afficher_struct2 (Pointeur_ATiic *R);
  void Inordre2 (Pointeur_ATiic *R);
  void Trouv_pourc (Pointeur_ATiic *R , string2 *Ca , int *N1 , int *N2 , int *Cpt1 , int *Cpt2);

  /***************************************************************/
  void Insert_arbre (Pointeur_ATssic *C , Typestr_Tssic *S)
    {
      /** Variables locales **/
      Pointeur_ATssic D;
      Pointeur_ATssic _Px1;
      Pointeur_ATssic _Px2;

      /** Corps du module **/
     if( *C == NULL) {
       Creernoeud_ATssic (& *C ) ;
       Aff_info_ATssic ( *C , *S ) ;
       }
     else
       {
       if( Struct3_Tssic ( *S  ) >= Struct3_Tssic ( Info_ATssic ( *C )  )) {
         if( Fd_ATssic ( *C ) == NULL) {
           Creernoeud_ATssic (& D ) ;
           Aff_info_ATssic ( D , *S ) ;
           Aff_fd_ATssic ( *C , D ) ;
           }
         else
           {
           _Px1 =  Fd_ATssic ( *C ) ;
           Insert_arbre ( &_Px1, & *S ) ;

         } ;

       } ;
       if( Struct3_Tssic ( *S  ) < Struct3_Tssic ( Info_ATssic ( *C )  )) {
         ;
         if( Fg_ATssic ( *C ) == NULL) {
           Creernoeud_ATssic (& D ) ;
           Aff_info_ATssic ( D , *S ) ;
           Aff_fg_ATssic ( *C , D ) ;
           }
         else
           {
           _Px2 =  Fg_ATssic ( *C ) ;
           Insert_arbre ( &_Px2, & *S ) ;

         } ;

       } ;

     } ;

    }
  string2  Random_res (int *Stat)
    {
      /** Variables locales **/
      string2  Random_res2 ;
      string2 C;
      int N;

      /** Corps du module **/
     C = malloc(2 * sizeof(char));
     Random_res2 = malloc(2 * sizeof(char));
     N  =  Aleanombre ( *Stat ) ;
     if( N > 150) {
       strcpy (Random_res2,   "D"); }
     else
       {
       strcpy (Random_res2,   "R");
     } ;

     return Random_res2 ;
    }
  void Remplir_struct (Typevect_V10ATssic *T , Pointeur_ATssic *R , Typestr_Tssic *S)
    {
      /** Variables locales **/
      int N;
      int I;
      int M;
      int J;
      bool Bool;
      int _Px1;
      Type_Tssic S_S;

      /** Corps du module **/
     N  =  10 ;
     I  =  1 ;
     while( ( I <= N )) {
       M  =  20 ;
       *R  =  NULL ;
       for( J  =  1 ;J <=  M ; ++J){
         _Px1 =  301 ;
         S_S.Champ1= malloc(255 * sizeof(char));
         strcpy(S_S.Champ1 , Aleachaine(Aleanombre(8)+2)) ;
         S_S.Champ2= malloc(255 * sizeof(char));
         strcpy(S_S.Champ2 , Aleachaine(Aleanombre(8)+2)) ;
         S_S.Champ3 = Aleanombre(100) ;
         S_S.Champ4= malloc(2 * sizeof(char));
         strcpy(S_S.Champ4 , Random_res(&_Px1)) ;
         Init_struct_Tssic ( *S , S_S )  ;
         Insert_arbre ( & *R , & *S ) ;

       } ;
       Aff_element_V10ATssic ( *T , I   , *R ) ;
       I  =  I + 1 ;

     } ;

    }
  void Afficher_struct (int *I , Typevect_V10ATssic *T , Pointeur_ATssic *R)
    {
      /** Variables locales **/
      Pointeur_ATssic _Px1;

      /** Corps du module **/
     printf ( " %s", "===================================================================== \n" ) ;
     printf ( " %s", "             *** voici votre arbre remplis *** \n     " ) ;
     printf ( " %s", "==================================================================== \n" ) ;
     _Px1 =  Element_V10ATssic ( *T , *I   ) ;
     Inordre ( &_Px1) ;

    }
  void Inordre (Pointeur_ATssic *R)
    {
      /** Variables locales **/
      Pointeur_ATssic _Px1;
      Pointeur_ATssic _Px2;

      /** Corps du module **/
     if( ( *R != NULL )) {
       _Px1 =  Fg_ATssic ( *R ) ;
       Inordre ( &_Px1) ;
       printf ( " %s", "nom : " ) ;
       printf ( " %s", Struct1_Tssic(Info_ATssic(*R)) ) ;
       printf("\n");
       printf ( " %s", "prenom : " ) ;
       printf ( " %s", Struct2_Tssic(Info_ATssic(*R)) ) ;
       printf("\n");
       printf ( " %s", "age :   " ) ;
       printf ( " %d", Struct3_Tssic(Info_ATssic(*R)) ) ;
       printf("\n");
       printf ( " %s", "resultat  :   " ) ;
       printf ( " %s", Struct4_Tssic(Info_ATssic(*R)) ) ;
       printf("\n");
       printf ( " %s", "  == " ) ;
       _Px2 =  Fd_ATssic ( *R ) ;
       Inordre ( &_Px2) ;

     } ;

    }
  void New_tree (Typevect_V10ATssic *T , int *I , Pointeur_ATiic *Tree)
    {
      /** Variables locales **/
      Typestr_Tiic S3;
      Pointeur_ATssic _Px1;

      /** Corps du module **/
     S3 = malloc(sizeof(Type_Tiic));
     S3->Champ3 = malloc(2 * sizeof(char));
     Aff_struct1_Tiic ( S3  , 0 ) ;
     Aff_struct2_Tiic ( S3  , 0 ) ;
     Aff_struct3_Tiic ( S3  , "0" ) ;
     Creernoeud_ATiic (& *Tree ) ;
     Aff_info_ATiic ( *Tree , S3 ) ;
     for( *I  =  1 ;*I <=  10 ; ++*I){
       _Px1 =  Element_V10ATssic ( *T , *I   ) ;
       Inordreinsert ( &_Px1, & *Tree ) ;

     } ;

    }
  void Inordreinsert (Pointeur_ATssic *A , Pointeur_ATiic *B)
    {
      /** Variables locales **/
      Pointeur_ATiic C;
      Pointeur_ATssic _Px1;
      Typestr_Tssic _Px2;
      Typestr_Tssic _Px3;
      Pointeur_ATssic _Px4;

      /** Corps du module **/
     _Px2 = malloc(sizeof(Type_Tssic));
     _Px2->Champ1 = malloc(255 * sizeof(char));
     _Px2->Champ2 = malloc(255 * sizeof(char));
     _Px2->Champ4 = malloc(2 * sizeof(char));
     _Px3 = malloc(sizeof(Type_Tssic));
     _Px3->Champ1 = malloc(255 * sizeof(char));
     _Px3->Champ2 = malloc(255 * sizeof(char));
     _Px3->Champ4 = malloc(2 * sizeof(char));
     if( *A != NULL) {
       _Px1 =  Fg_ATssic ( *A ) ;
       Inordreinsert ( &_Px1, & *B ) ;
       if(strcmp( Struct4_Tssic ( Info_ATssic ( *A )  ), "R") == 0 ) {
         ;
         C  =  Fd_ATiic ( *B ) ;
         _Px2 =  Info_ATssic ( *A ) ;
         Inserer2 ( & C , &_Px2) ;
         Aff_fd_ATiic ( *B , C ) ;
         }
       else
         {
         C  =  Fg_ATiic ( *B ) ;
         _Px3 =  Info_ATssic ( *A ) ;
         Inserer2 ( & C , &_Px3) ;
         Aff_fg_ATiic ( *B , C ) ;

       } ;
       _Px4 =  Fd_ATssic ( *A ) ;
       Inordreinsert ( &_Px4, & *B ) ;

     } ;

    }
  void Inserer2 (Pointeur_ATiic *A , Typestr_Tssic *K)
    {
      /** Variables locales **/
      Pointeur_ATiic B;
      Typestr_Tiic S;
      Pointeur_ATiic _Px1;
      Pointeur_ATiic _Px2;

      /** Corps du module **/
     S = malloc(sizeof(Type_Tiic));
     S->Champ3 = malloc(2 * sizeof(char));
     if( *A == NULL) {
       Creernoeud_ATiic (& *A ) ;
       Aff_struct1_Tiic ( S  , Struct3_Tssic ( *K  ) ) ;
       Aff_struct2_Tiic ( S  , 1 ) ;
       Aff_struct3_Tiic ( S  , Struct4_Tssic ( *K  ) ) ;
       Aff_info_ATiic ( *A , S ) ;
       }
     else
       {
       if( Struct3_Tssic ( *K  ) == Struct1_Tiic ( Info_ATiic ( *A )  )) {
         Aff_struct2_Tiic ( Info_ATiic ( *A )  , Struct2_Tiic ( Info_ATiic ( *A )  ) + 1 ) ;
         }
       else
         {
         if( Struct3_Tssic ( *K  ) > Struct1_Tiic ( Info_ATiic ( *A )  )) {
           if( Fd_ATiic ( *A ) == NULL) {
             Creernoeud_ATiic (& B ) ;
             Aff_struct1_Tiic ( S  , Struct3_Tssic ( *K  ) ) ;
             Aff_struct2_Tiic ( S  , 1 ) ;
             Aff_struct3_Tiic ( S  , Struct4_Tssic ( *K  ) ) ;
             Aff_info_ATiic ( B , S ) ;
             Aff_fd_ATiic ( *A , B ) ;
            /*lol*/
             }
           else
             {
             _Px1 =  Fd_ATiic ( *A ) ;
             Inserer2 ( &_Px1, & *K ) ;

           } ;
           }
         else
           {
           if( Struct3_Tssic ( *K  ) < Struct1_Tiic ( Info_ATiic ( *A )  )) {
             if( Fg_ATiic ( *A ) == NULL) {
               Creernoeud_ATiic (& B ) ;
               Aff_struct1_Tiic ( S  , Struct3_Tssic ( *K  ) ) ;
               Aff_struct2_Tiic ( S  , 1 ) ;
               Aff_struct3_Tiic ( S  , Struct4_Tssic ( *K  ) ) ;
               Aff_info_ATiic ( B , S ) ;
               Aff_fg_ATiic ( *A , B ) ;
              /* lol*/
               }
             else
               {
               _Px2 =  Fg_ATiic ( *A ) ;
               Inserer2 ( &_Px2, & *K ) ;

             } ;

           } ;

         } ;

       } ;

     } ;

    }
  void Afficher_struct2 (Pointeur_ATiic *R)
    {

      /** Corps du module **/
     printf ( " %s", "=====================================================================" ) ;
     printf ( " %s", "             *** voici votre 2 EME ARBRE***      " ) ;
     printf ( " %s", "====================================================================" ) ;
     Inordre2 ( & *R ) ;

    }
  void Inordre2 (Pointeur_ATiic *R)
    {
      /** Variables locales **/
      Pointeur_ATiic _Px1;
      Pointeur_ATiic _Px2;

      /** Corps du module **/
     if( ( *R != NULL )) {
       _Px1 =  Fg_ATiic ( *R ) ;
       Inordre2 ( &_Px1) ;
       printf ( " %s", "AGE : " ) ;
       printf ( " %d", Struct1_Tiic(Info_ATiic(*R)) ) ;
       printf("\n");
       printf ( " %s", "OCCURENCE : " ) ;
       printf ( " %d", Struct2_Tiic(Info_ATiic(*R)) ) ;
       printf("\n");
       printf ( " %s", "RESULTAT :   " ) ;
       printf ( " %s", Struct3_Tiic(Info_ATiic(*R)) ) ;
       printf("\n");
       printf ( " %s", "  == " ) ;
       _Px2 =  Fd_ATiic ( *R ) ;
       Inordre2 ( &_Px2) ;

     } ;

    }
  void Trouv_pourc (Pointeur_ATiic *R , string2 *Ca , int *N1 , int *N2 , int *Cpt1 , int *Cpt2)
    {
      /** Variables locales **/
      Pointeur_ATiic _Px1;
      Pointeur_ATiic _Px2;

      /** Corps du module **/
     if( ( *R != NULL )) {
       _Px1 =  Fg_ATiic ( *R ) ;
       Trouv_pourc ( &_Px1, & *Ca , & *N1 , & *N2 , & *Cpt1 , & *Cpt2 ) ;
       *Cpt1  =  *Cpt1 + Struct2_Tiic ( Info_ATiic ( *R )  ) ;
       if( ( ( Struct1_Tiic ( Info_ATiic ( *R )  ) > *N1 ) && ( Struct1_Tiic ( Info_ATiic ( *R )  ) < *N2 ) )) {
         if(strcmp( Struct3_Tiic ( Info_ATiic ( *R )  ), *Ca) == 0 ) {
           *Cpt2  =  *Cpt2 + Struct2_Tiic ( Info_ATiic ( *R )  ) ;

         } ;

       } ;
       _Px2 =  Fd_ATiic ( *R ) ;
       Trouv_pourc ( &_Px2, & *Ca , & *N1 , & *N2 , & *Cpt1 , & *Cpt2 ) ;

     } ;
    /*  POURC:=(CPT2*1111100)/CPT1; */

    }

  int main(int argc, char *argv[])
    {
     Tab = malloc(10 * sizeof(Pointeur_ATssic));
     int _Izw2;for (_Izw2=0; _Izw2<10; ++_Izw2)
       Tab[_Izw2] = malloc( sizeof(Pointeur_ATssic ));
     S = malloc(sizeof(Type_Tssic));
     S->Champ1 = malloc(255 * sizeof(char));
     S->Champ2 = malloc(255 * sizeof(char));
     S->Champ4 = malloc(2 * sizeof(char));
     Ca = malloc(2 * sizeof(char));
     Cp1  =  0 ;
     Cp2  =  0 ;
     Result  =  0 ;
     Remplir_struct ( & Tab , & R1 , & S ) ;
     for( I  =  1 ;I <=  10 ; ++I){
       Afficher_struct ( & I , & Tab , & R1 ) ;

     } ;
     New_tree ( & Tab , & I , & R2 ) ;
     Afficher_struct2 ( & R2 ) ;
     printf ( " %s", "  == " ) ;
     printf ( " %s", "ENTREZ L'AGE MININMUM POUR L'INTERVALLE \n" ) ;
     scanf ( " %d", &N1 ) ;
     printf ( " %s", "ENTRZ L'AGE MAXIMUM POUR L'INTERVALLE \n" ) ;
     scanf ( " %d", &N2 ) ;
     printf ( " %s", "ENTREZ LE RESULTAT RECHERCHE (D OU R) \n" ) ;
     scanf ( " %s", Ca ) ;
     printf ( " %s", " LE POURCENTAGE CALCULÉ EST DE  " ) ;
     Trouv_pourc ( & R2 , & Ca , & N1 , & N2 , & Cp1 , & Cp2 ) ;
     Result  =  ( Cp2 * 100 ) / Cp1 ;
     printf ( " %d", Result ) ;


      system("PAUSE");
      return 0;
    }
