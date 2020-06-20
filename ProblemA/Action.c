Action()
{
	int i=1;
	char loopParamId[10]="\0"; 
	char loopParamName[30]="\0";
	char loopParamSurname[30]="\0";
	
	if ((file = fopen(filename, "w+" )) == NULL) {
		lr_output_message("Unable to create %s", filename);
		return -1;
	}
	
	web_add_header("Upgrade-Insecure-Requests", "1");
	web_reg_save_param("c_id", "LB=\"id\" : ", "RB=,", "Search=Body", "ORD=ALL", LAST);
//	web_reg_save_param("c_name", "LB=\"name\" : \"", "RB=\",", "Search=Body", "ORD=ALL", LAST);
//	web_reg_save_param("c_surname", "LB=\"surname\" : \"", "RB=\",", "Search=Body", "ORD=ALL", LAST);
	web_reg_save_param("c_responseCode", "LB=HTTP/1.1 ", "RB= ", "Search=Headers", "ORD=1", LAST);

	web_url("users", 
		"URL=http://35.188.114.237:8088/api/v2/users", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
	
	while(i<=atoi(lr_eval_string("{c_id_count}"))){
		sprintf(loopParamId,"{c_id_%d}",i);
//		sprintf(loopParamName,"{c_name_%d}",i);
//		sprintf(loopParamSurname,"{c_surname_%d}",i);
//		fprintf(file, "ID - %s, User Name - %s %s\n",lr_eval_string(loopParamId) , lr_eval_string(loopParamName), lr_eval_string(loopParamSurname));
		fprintf(file, "ID - %s\n",lr_eval_string(loopParamId));
		i++;
	}
	fprintf(file,"HTTP Response Code - %s\n", lr_eval_string("{c_responseCode}"));
	fclose(file);

	return 0;
}