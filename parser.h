typedef union {
    token                *tok;

    token_list           *toks; 

    node                 *n_node;
    tpd_node             *n_tpd;
    block_node           *n_block; 
    stmt_node            *n_stmt; 
    decl_node            *n_decl; 
    expr_node            *n_expr; 
    expr_group_node      *n_grp; 

    write_param_node     *n_wrtp; 
    write_list_node      *n_wrls; 
    case_node            *n_case; 
    set_item_node        *n_item; 

    const_def_node       *n_cdef; 
    type_def_node        *n_tdef; 
    var_decl_node        *n_vdcl; 

    field_init_node      *n_field;
    
    param_list_node      *n_plist; 
    idx_node             *n_idx; 

    field_list_node      *n_fldls;
    variant_part_node    *n_varp;
    selector_node        *n_sel; 
    variant_node         *n_vari;
    compound_node        *n_comp;
   
    import_list_node     *n_imp; 
} YYSTYPE;
#define	ARRAY	258
#define	BEGIN	259
#define	CASE	260
#define	CONST	261
#define	DO	262
#define	DOTS	263
#define	ELSE	264
#define	END	265
#define	FIL	266
#define	FAR	267
#define	FOR	268
#define	FUNCTION	269
#define	GOTO	270
#define	IDENT	271
#define	ICONST	272
#define	IF	273
#define	IMPLEMENTATION	274
#define	INTERFACE	275
#define	LABEL	276
#define	LET	277
#define	LOOPHOLE	278
#define	OBJECT	279
#define	OF	280
#define	ORIGIN	281
#define	OTHERWISE	282
#define	PACKED	283
#define	PROCEDURE	284
#define	PROGRAM	285
#define	RCONST	286
#define	READ	287
#define	RECORD	288
#define	REPEAT	289
#define	RETURN	290
#define	SET	291
#define	SCONST	292
#define	STRING	293
#define	THEN	294
#define	TO	295
#define	TYPE	296
#define	UNTIL	297
#define	UNIT	298
#define	UNIT_END	299
#define	VAR	300
#define	WHILE	301
#define	WITH	302
#define	WRITE	303
#define	SCOPE	304
#define	LETADD	305
#define	LETSUB	306
#define	LETDIV	307
#define	LETMUL	308
#define	LETAND	309
#define	LETOR	310
#define	LETSHL	311
#define	LETSHR	312
#define	EQ	313
#define	NE	314
#define	LT	315
#define	LE	316
#define	GT	317
#define	GE	318
#define	IN	319
#define	PLUS	320
#define	MINUS	321
#define	OR	322
#define	XOR	323
#define	MOD	324
#define	DIV	325
#define	DIVR	326
#define	MUL	327
#define	AND	328
#define	SHR	329
#define	SHL	330
#define	UPLUS	331
#define	UMINUS	332
#define	NOT	333
#define	ADDRESS	334


extern YYSTYPE zzlval;
