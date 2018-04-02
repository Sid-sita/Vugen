Action()
{

	/* ForwardBag -> Create */

	web_add_auto_header("User-Token",
		"{C_UserToken}");

//	lr_think_time(20);

	web_custom_request("roles", 
		"URL=https://{P_hostName}/{P_codeVersion2}/wtrui-web/v6.0/Proxy/login/roles", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t175.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"user\":{\"userId\":\"WTDADMIN\",\"companyId\":\"LH\",\"applicationId\":\"WTD\",\"resourceId\":\"FORWARDBAG\"},\"captcha\":{\"capId\":\"No_Captcha\"}}", 
		LAST);

	web_custom_request("validate_2", 
		"URL=https://{P_hostName}/{P_codeVersion2}/wtrui-web/v6.0/Proxy/login/validate", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t176.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_revert_auto_header("User-Token");

	web_url("RushBagIndex.html", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/app/components/RushBags/templates/RushBagIndex.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t177.inf", 
		"Mode=HTML", 
		LAST);

	web_url("bag.html", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/app/components/RushBags/templates/bag.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t178.inf", 
		"Mode=HTML", 
		LAST);

	web_url("more.html", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/app/components/RushBags/templates/more.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t179.inf", 
		"Mode=HTML", 
		LAST);

	web_url("flight.html", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/app/components/RushBags/templates/flight.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t180.inf", 
		"Mode=HTML", 
		LAST);

	web_url("summary.html", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/app/components/RushBags/templates/summary.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t181.inf", 
		"Mode=HTML", 
		LAST);

	web_url("commonHeaderComponent.html", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/app/shared/commonHeaderComponent/commonHeaderComponent.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t182.inf", 
		"Mode=HTML", 
		LAST);

//	lr_think_time(10);

	web_url("bagType.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/bagData/bagType.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t183.inf", 
		"Mode=HTML", 
		LAST);

//	lr_think_time(4);

	web_url("onClickTemp.html", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/app/components/onClickHome/onClickTemp.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t184.inf", 
		"Mode=HTML", 
		LAST);

	web_url("afterError.html", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/app/components/afterError/afterError.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t185.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("User-Token",
		"{C_UserToken}");

//	lr_think_time(4);

	web_custom_request("LH", 
		"URL=https://{P_hostName}/{P_codeVersion2}/wtrui-web/v6.0/Proxy/airlines/handled/AAA/LH", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t186.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		LAST);

	web_custom_request("rlcreadall", 
		"URL=https://{P_hostName}/{P_codeVersion2}/wtrui-web/v6.0/proxy/airline/rlcreadall", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t187.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"WTR_RLCConfigReadRQ\":{\"POS\":{\"Source\":[{\"AirlineVendorID\":\"LH\"}]},\"RLCConfig\":{\"LossReason\":10,\"Reports\":\"true\",\"AirlineCode\":\"{P_AirlineCode}\"},\"AgentID\":\"WTDADMIN\",\"Version\":\"1.0\"}}", 
		LAST);

	web_custom_request("LH_2", 
		"URL=https://{P_hostName}/{P_codeVersion2}/wtrui-web/v6.0/Proxy/airlines/handled/AAA/LH", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t188.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		LAST);

//	lr_think_time(7);

	web_custom_request("read_3", 
		"URL=https://{P_hostName}/{P_codeVersion2}/baggage/wtrui-web/v6.0/config/stationsattributes/read", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t189.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"WTR_StationAttributesReadRQ\":{\"POS\":{\"Source\":[{\"AirlineVendorID\":\"LH\"}]},\"StationAirline\":{\"AirlineCode\":\"{P_AirlineCode}\",\"StationCode\":\"{P_StationCode}\"},\"AgentID\":\"WTDADMIN\",\"Version\":0.1}}", 
		EXTRARES, 
		"Url=/desktop/{P_codeVersion1}/css/fonts/bootstrap/glyphicons-halflings-regular.woff", "Referer=https://{P_hostName}/desktop/{P_codeVersion1}/css/themes/main_LH.css", ENDITEM, 
		LAST);

//	lr_think_time(73);

	lr_start_transaction("SC04_02_CreateForwardBag_FWD");


//	lr_think_time(61);

/*Correlation comment - Do not change!  Original value='11925' Name ='C_RefNumber' Type ='Manual'*/
	web_reg_save_param_json(
		"ParamName=C_RefNumber",
		"QueryString=$.CreateResponse.WTR_BagsCreateRS.RecordID.RecordReference.ReferenceNumber",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

/*	web_custom_request("createread", 
		"URL=https://{P_hostName}/{P_codeVersion2}/wtrui-web/v6.0/proxy/forwardbags/createread", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t191.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body=[{\"WTR_RushBagsCreateRQ\":{\"HandledAirlineCopyInd\":\"FULL\",\"RushBagGroup\":{\"OriginalFlights\":{\"FlightDateOrARNK\":[{\"FlightDate\":{\"FlightNumber\":\"301\",\"Date\":\"{P_TravelDate}\",\"AirlineCode\":\"AI\"}}]},\"RushFlights\":{\"FlightDateOrARNK\":[{\"FlightDate\":{\"FlightNumber\":\"302\",\"Date\":\"{P_TravelDate}\",\"AirlineCode\":\"AI\"}}]},\"Names\":{\"Name\":[\"family\"]},\"RushBags\":{\"RushBag\":[{\"RushBagTag\":{\"LicenseNumber\":{\"TagType\":\"1\",\"IssuerCode\":\"234\"},\""
		"TagSequence\":\"{P_Tag}\"},\"OriginalBagTag\":{\"LicenseNumber\":{\"TagType\":\"2\",\"IssuerCode\":\"134\"},\"TagSequence\":\"{P_Tag}\"}},{\"RushBagTag\":{\"LicenseNumber\":{\"TagType\":\"3\",\"IssuerCode\":\"214\"},\"TagSequence\":\"{P_Tag}\"},\"OriginalBagTag\":{\"LicenseNumber\":{\"TagType\":\"2\",\"IssuerCode\":\"315\"},\"TagSequence\":\"{P_Tag}\"}}]},\"NumberOfBags\":2,\"RushDestinations\":{\"Destination\":[{\"StationCode\":\"SYD\",\"AirlineCode\":\"AI\"}]}},\"TeletypeAddresses\":{\""
		"TeletypeAddress\":[\"ADDRESS\"]},\"LossReasonCode\":10,\"FaultStationCode\":\"DEL\",\"FaultTerminal\":\"02\",\"SupplimentalInfo\":{\"TextLine\":[\"information\"]},\"RefStationAirline\":{\"AirlineCode\":\"LH\",\"StationCode\":\"AAA\"},\"Version\":0.1,\"AgentID\":\"WTDADMIN\",\"POS\":{\"Source\":[{\"AirlineVendorID\":\"LH\"}]}}},{\"userID\":\"WTDADMIN\",\"customerID\":\"LH\",\"draftTime\":\"NA\",\"reportResult\":\"SUCCESS\",\"deviceId\":\"Firefox 28\",\"action\":\"CREATE\",\"worldTracerDescription\""
		":\"RUSH BAG CREATE\",\"osTypeAndVersion\":\"WIN32\",\"sourceType\":\"DESKTOP\",\"submitTime\":\"{P_DateTime}\",\"transactionID\":\"FWD\",\"utcDateAndTime\":\"{P_DateTime}\",\"reportType\":\"RUSHBAG\",\"station\":\"AAA\",\"airlineCode\":\"LH\",\"referenceNumber\":\"NA\",\"browser\":\"Firefox 28\"},{\"isGeneratedTag\":\"false\"}]", 
		LAST);

	lr_output_message("TagSequence:1234%s | RefNumber:AAALH%s",lr_eval_string("{P_Tag}"),lr_eval_string("{C_RefNumber}"));
	lr_log_message("TagSequence:1234%s | RefNumber:AAALH%s",lr_eval_string("{P_Tag}"),lr_eval_string("{C_RefNumber}"));

*/	

	web_custom_request("createread", 
		"URL=https://{P_hostName}/{P_codeVersion2}/wtrui-web/v6.0/proxy/forwardbags/createread", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t191.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body=[{\"WTR_RushBagsCreateRQ\":{\"HandledAirlineCopyInd\":\"FULL\",\"RushBagGroup\":{\"OriginalFlights\":{\"FlightDateOrARNK\":[{\"FlightDate\":{\"FlightNumber\":\"{P_FlightNo}\",\"Date\":\"{P_OriginalFlightDate}\",\"AirlineCode\":\"{P_AirlineCode}\"}}]},\"RushFlights\":{\"FlightDateOrARNK\":[{\"FlightDate\":{\"FlightNumber\":\"{P_FlightNo}\",\"Date\":\"{P_RushFlightDate}\",\"AirlineCode\":\"{P_AirlineCode}\"}}]},\"Names\":{\"Name\":[\"{P_FamilyName}\"]},\"RushBags\":{\"RushBag\":[{\"RushBagTag\":{\"LicenseNumber\":{\"TagType\":\"1\",\"IssuerCode\":\"{P_IssueCode}\"},\""
		"TagSequence\":\"{P_Tag}\"},\"OriginalBagTag\":{\"LicenseNumber\":{\"TagType\":\"2\",\"IssuerCode\":\"{P_IssueCode}\"},\"TagSequence\":\"{P_Tag}\"}}]},\"NumberOfBags\":1,\"RushDestinations\":{\"Destination\":[{\"StationCode\":\"{P_StationCode}\",\"AirlineCode\":\"{P_AirlineCode}\"}]}},\"LossReasonCode\":10,\"FaultStationCode\":\"{P_StationCode}\",\"RefStationAirline\":{\"AirlineCode\":\"{P_AirlineCode}\",\"StationCode\":\"{P_StationCode}\"},\"Version\":0.1,\"AgentID\":\"WTDADMIN\",\"POS\":{\"Source\":[{\"AirlineVendorID\":\"LH\"}]}}},{\"userID\":\"WTDADMIN\",\""
		"customerID\":\"LH\",\"draftTime\":\"NA\",\"reportResult\":\"SUCCESS\",\"deviceId\":\"Firefox 28\",\"action\":\"CREATE\",\"worldTracerDescription\":\"RUSH BAG CREATE\",\"osTypeAndVersion\":\"WIN32\",\"sourceType\":\"DESKTOP\",\"submitTime\":\"{P_DateTime}\",\"transactionID\":\"FWD\",\"utcDateAndTime\":\"{P_DateTime}\",\"reportType\":\"RUSHBAG\",\"station\":\"{P_StationCode}\",\"airlineCode\":\"{P_AirlineCode}\",\"referenceNumber\":\"NA\",\"browser\":\"Firefox 28\"},{\"isGeneratedTag\":\""
		"false\"}]", 
	LAST);
		
	lr_output_message("%s,%s,%s,%s,%d,%s,%s",lr_eval_string("{P_StationCode}"),lr_eval_string("{P_AirlineCode}"),lr_eval_string("{C_RefNumber}"),lr_eval_string("{P_FamilyName}"),1,lr_eval_string("{P_IssueCode}"),lr_eval_string("{P_Tag}"));
	lr_log_message("%s,%s,%s,%s,%d,%s,%s",lr_eval_string("{P_StationCode}"),lr_eval_string("{P_AirlineCode}"),lr_eval_string("{C_RefNumber}"),lr_eval_string("{P_FamilyName}"),1,lr_eval_string("{P_IssueCode}"),lr_eval_string("{P_Tag}"));

	web_custom_request("validate_3", 
		"URL=https://{P_hostName}/{P_codeVersion2}/wtrui-web/v6.0/Proxy/login/validate", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t192.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_revert_auto_header("User-Token");

	web_url("rushBagFileDetails.html", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/app/components/RushBags/templates/rushBagFileDetails.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t193.inf", 
		"Mode=HTML", 
		LAST);

//	lr_think_time(4);

	web_url("SendPirModal.html", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/app/shared/Modals/SendPirModal.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t194.inf", 
		"Mode=HTML", 
		LAST);

	web_url("copyMessageTemplate.html", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/app/components/searchRush/Templates/copyMessageTemplate.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t195.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("SC04_02_CreateForwardBag_FWD",LR_AUTO);

//	lr_start_transaction("SC04_03_GoToHomePage");

	web_add_header("User-Token",
		"{C_UserToken}");

//	lr_think_time(16);

	web_custom_request("validate_4", 
		"URL=https://{P_hostName}/{P_codeVersion2}/wtrui-web/v6.0/Proxy/login/validate", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t196.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

//	lr_end_transaction("SC04_03_GoToHomePage",LR_AUTO);

	return 0;
}
