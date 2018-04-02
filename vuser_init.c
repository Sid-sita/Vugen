/* -------------------------------------------------------------------------------
	Script Title       : WTD - Create Forward Bag
	Script Description : Login -> Click Forward Bag -> Click Create -> Enter Station,Airline Code -> 
						 Enter Bag Details -> Enter Flight Details-> Click Create -> Go Back to Home Page -> Logout
    Test Data Parameters:                          
	Script Created By : Nitin Rastogi
   ------------------------------------------------------------------------------- */

vuser_init()
{
	char *hostName;
	char *codeVersion1;
	char *codeVersion2;
	
	hostName = "desktop-perf2.worldtracer.aero";  //PT Env
//	hostName = "57.191.5.51";	//QA Env
	
	codeVersion1 = "1.2.0.43"; //PT Env
//	codeVersion1 = "1.1.0.105"; //QA Env

	codeVersion2 = "1.2.0.11"; //PT Env
//	codeVersion2 = "1.1.0.20"; //QA Env
	
lr_save_string(hostName,"P_hostName");
lr_save_string(codeVersion1,"P_codeVersion1");
lr_save_string(codeVersion2,"P_codeVersion2");

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_set_sockets_option("TLS_SNI", "0");

	web_url("{P_codeVersion1}", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=fonts/fontawesome-webfont.woff?v=4.3.0", "Referer=https://{P_hostName}/desktop/{P_codeVersion1}/css/font-awesome.min.css", ENDITEM, 
		"Url=css/themes/main.css", ENDITEM, 
		"Url=assets/img/SITA_logo.png", ENDITEM, 
		"Url=css/themes/main_LH.css", ENDITEM, 
		LAST);

	web_url("data.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/data.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		LAST);

	web_url("airports.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/flightsData/airports.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		LAST);

	web_url("delayedBags_en-US.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/languages/en-US/delayedBags_en-US.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		LAST);

	web_url("imagepopup.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/bagData/imagepopup.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		LAST);

	web_url("primaryLanguage.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/passengerData/primaryLanguage.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		LAST);

	web_url("airlines.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/flightsData/airlines.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		LAST);

	web_url("completionTimeListAirline.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/completionTimeListAirline.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		LAST);

	web_url("phoneCode.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/phoneCode.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		LAST);

	web_url("deliveryAddressType.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/deliveryAddressType.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t107.inf", 
		"Mode=HTML", 
		LAST);

	web_url("sendMessege.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/sendMessege.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t108.inf", 
		"Mode=HTML", 
		LAST);

	web_url("countryCellPhoneCode.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/countryCellPhoneCode.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t109.inf", 
		"Mode=HTML", 
		LAST);

	web_url("titleData.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/passengerData/titleData.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t110.inf", 
		"Mode=HTML", 
		LAST);

	web_url("forAirlineMandatory.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/forAirlineMandatory.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t111.inf", 
		"Mode=HTML", 
		LAST);

	web_url("btpIssuerCodes.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/btpIssuerCodes.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t112.inf", 
		"Mode=HTML", 
		LAST);

	web_url("IssuerCode.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/IssuerCode.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t113.inf", 
		"Mode=HTML", 
		LAST);

	web_url("transactionList.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/transactionList.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t114.inf", 
		"Mode=HTML", 
		LAST);

	web_url("brandInformation.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/brandInformation.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t115.inf", 
		"Mode=HTML", 
		LAST);

	web_url("bagTypedesc.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/bagData/bagTypedesc.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t116.inf", 
		"Mode=HTML", 
		LAST);

	web_url("states.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/passengerData/states.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t117.inf", 
		"Mode=HTML", 
		LAST);

	web_url("bagColor.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/bagData/bagColor.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t118.inf", 
		"Mode=HTML", 
		LAST);

	web_url("bagDescDetailJson.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/bagData/bagDescDetailJson.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t119.inf", 
		"Mode=HTML", 
		LAST);

	web_url("airlineIssuercodes.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/airlineIssuercodes.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t120.inf", 
		"Mode=HTML", 
		LAST);

	web_url("citynames.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/flightsData/citynames.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t121.inf", 
		"Mode=HTML", 
		LAST);

	web_url("regioncode.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/regioncode.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		LAST);

	web_url("btpDefault.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/btpDefault.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		LAST);

	web_url("lossCode.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/lossCode.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		LAST);

	web_url("currencyCode.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/currencyCode.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		LAST);

	web_url("emailDomain.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/emailDomain.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		LAST);

	web_url("configurationData.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/WTRUIConfigurationJsonData/configurationData.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t127.inf", 
		"Mode=HTML", 
		LAST);

	web_url("airlineConfigurationTransactions.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/WTRUIConfigurationJsonData/airlineConfigurationTransactions.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		LAST);

	web_url("fileStatus.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/OfflineStoriesData/fileStatus.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t129.inf", 
		"Mode=HTML", 
		LAST);

	web_url("messageType.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/actionFileData/messageType.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 
		LAST);

	web_url("PIR-language.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/PIR-language.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		LAST);

	web_url("claimSettlementCostJson.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/claimSettlementCostJson.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t132.inf", 
		"Mode=HTML", 
		LAST);

	web_url("urlJson.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/urlJson.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t133.inf", 
		"Mode=HTML", 
		LAST);

	web_url("externalUrl.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/externalUrl.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t134.inf", 
		"Mode=HTML", 
		LAST);

	web_url("handledAirlineCopyJson.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/handledAirlineCopyJson.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t135.inf", 
		"Mode=HTML", 
		LAST);

	web_url("countryCodesName.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/countryCodesName.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t136.inf", 
		"Mode=HTML", 
		LAST);

	web_url("reportsData.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/WTRUIReportsJsonData/reportsData.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t137.inf", 
		"Mode=HTML", 
		LAST);

	web_url("colorTypeDescLang.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/bagData/colorTypeDescLang.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t138.inf", 
		"Mode=HTML", 
		LAST);

	web_url("error_en-US.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/errorMessages/error_en-US.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t139.inf", 
		"Mode=HTML", 
		LAST);

	web_url("errorCodes.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/errorCodes.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t140.inf", 
		"Mode=HTML", 
		LAST);

	web_url("localization_en_US.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/locales/localization_en_US.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t141.inf", 
		"Mode=HTML", 
		LAST);

	web_url("footer.html", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/app/shared/footer/footer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t142.inf", 
		"Mode=HTML", 
		LAST);

	web_url("main.html", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/app/components/main/main.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t143.inf", 
		"Mode=HTML", 
		LAST);

	web_url("bagsContent.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/bagData/bagsContent.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t144.inf", 
		"Mode=HTML", 
		LAST);

	web_url("languages.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/languages/languages.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t145.inf", 
		"Mode=HTML", 
		LAST);

	web_url("header.html", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/app/shared/header/header.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t146.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shortkeyLogin_en-US.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/shortFolder/shortkeyLogin_en-US.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t147.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Login_en-US.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/languages/en-US/Login_en-US.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t148.inf", 
		"Mode=HTML", 
		LAST);

//	lr_think_time(14);

	lr_start_transaction("SC04_01_Login");

/*Correlation comment - Do not change!  Original value='LH_lsk9nezZchJiXCvUHm8aFJE7ERxvLlgSMDNlkNy1j2I=' Name ='C_UserToken' Type ='Manual'*/
	web_reg_save_param_json(
		"ParamName=C_UserToken",
		"QueryString=$.hash",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_custom_request("loginAuth", 
		"URL=https://{P_hostName}/{P_codeVersion2}/wtrui-web/v6.0/Proxy/login/loginAuth", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t149.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"user\":{\"userId\":\"WTDADMIN\",\"companyId\":\"LH\",\"password\":\"Sita@123\",\"stationType\":\"A\"},\"captcha\":{\"capId\":\"No_Captcha\"}}", 
		LAST);

	web_add_header("User-Token", 
		"null");

	web_custom_request("validate", 
		"URL=https://{P_hostName}/{P_codeVersion2}/wtrui-web/v6.0/Proxy/login/validate", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t150.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("landing.html", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/app/components/homeBaggage/landing.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t151.inf", 
		"Mode=HTML", 
		LAST);

	web_url("grid.html", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/app/components/homeBaggage/grid.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t152.inf", 
		"Mode=HTML", 
		LAST);

//	lr_think_time(4);

	web_url("shortcut-help.html", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/app/components/login/shortcut-help.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t153.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("User-Token",
		"{C_UserToken}");

	web_custom_request("read", 
		"URL=https://{P_hostName}/{P_codeVersion2}/baggage/wtrui-web/v6.0/config/stationsattributes/read", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t154.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"WTR_StationAttributesReadRQ\":{\"POS\":{\"Source\":[{\"AirlineVendorID\":\"LH\"}]},\"StationAirline\":{\"AirlineCode\":\"LH\",\"StationCode\":\"AAA\"},\"AgentID\":\"WTDADMIN\",\"Version\":0.1}}", 
		LAST);

	web_url("landing_en-US.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/languages/en-US/landing_en-US.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t155.inf", 
		"Mode=HTML", 
		LAST);

	web_url("prefill_data_errors_en-US.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/languages/en-US/prefill_data_errors_en-US.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t156.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shortkeyOne_en-US.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/shortFolder/shortkeyOne_en-US.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t157.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shortkeyThr.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/shortFolder/shortkeyThr.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t158.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shortKeyManageFileSummary.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/shortFolder/shortKeyManageFileSummary.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t159.inf", 
		"Mode=HTML", 
		LAST);

	web_url("convertCurrency.html", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/app/components/WTRUIReports/cost/convertCurrency/Templates/convertCurrency.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t160.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("User-Token",
		"{C_UserToken}");

	web_custom_request("userstations", 
		"URL=https://{P_hostName}/{P_codeVersion2}/wtrui-web/proxy/config/station/userstations", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t161.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"WTR_StationListReadRQ\":{\"POS\":{\"Source\":[{\"AirlineVendorID\":\"LH\"}]},\"Options\":{\"Airline\":\"LH\",\"Status\":\"T\"},\"AgentID\":\"WTDADMIN\",\"Target\":\"Production\",\"Version\":0.1}}", 
		LAST);

	web_custom_request("getmandatories", 
		"URL=https://{P_hostName}/{P_codeVersion2}/wtrui-web/v6.0/Proxy/airlines/getmandatories", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t162.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"airlineCode\":\"LH\",\"stationCode\":\"AAA\",\"transaction\":false}", 
		LAST);

	web_revert_auto_header("User-Token");

	web_url("sendDelayFile.html", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/app/components/homeBaggage/sendDelayFile.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t163.inf", 
		"Mode=HTML", 
		LAST);

	web_url("dashBoardTemplate.html", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/app/components/homeBaggage/dashBoard/dashBoardTemplates/dashBoardTemplate.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t164.inf", 
		"Mode=HTML", 
		LAST);

	web_url("emailMessage.html", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/app/components/action/Templates/message/emailMessage.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t165.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("User-Token",
		"{C_UserToken}");

	web_custom_request("read_2", 
		"URL=https://{P_hostName}/{P_codeVersion2}/baggage/wtrui-web/v6.0/config/stationsattributes/read", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t166.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"WTR_StationAttributesReadRQ\":{\"POS\":{\"Source\":[{\"AirlineVendorID\":\"LH\"}]},\"StationAirline\":{\"AirlineCode\":\"LH\",\"StationCode\":\"AAA\"},\"AgentID\":\"WTDADMIN\",\"Version\":0.1}}", 
		LAST);

	web_url("reassign.html", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/app/components/action/Templates/message/reassign.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t167.inf", 
		"Mode=HTML", 
		LAST);

	web_url("newMessage.html", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/app/components/action/Templates/message/newMessage.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t168.inf", 
		"Mode=HTML", 
		LAST);

	web_url("reopen.html", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/app/components/homeBaggage/reopenDelayedFile/reopen.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t169.inf", 
		"Mode=HTML", 
		LAST);

	web_url("reactiveTemplate.html", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/app/components/reactivateFile/reactiveTemplate.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t170.inf", 
		"Mode=HTML", 
		LAST);

	web_url("rematchModal.html", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/app/components/homeBaggage/rematchModal/rematchModal.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t171.inf", 
		"Mode=HTML", 
		LAST);

	web_url("sendTeletypeMessage.html", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/app/components/Miscellaneous/Templates/sendTeletypeMessage.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t172.inf", 
		"Mode=HTML", 
		LAST);

	web_url("cloneStation.html", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/app/components/reports/configStation/cloneStation/Templates/cloneStation.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t173.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shortKeyHelp.json", 
		"URL=https://{P_hostName}/desktop/{P_codeVersion1}/assets/data/shortFolder/shortKeyHelp.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{P_hostName}/desktop/{P_codeVersion1}/", 
		"Snapshot=t174.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/desktop/{P_codeVersion1}/assets/img/SITA_logo_LH_2.png", "Referer=https://{P_hostName}/desktop/{P_codeVersion1}/css/themes/main_LH.css", ENDITEM, 
		LAST);

	lr_end_transaction("SC04_01_Login",LR_AUTO);

	return 0;
}
