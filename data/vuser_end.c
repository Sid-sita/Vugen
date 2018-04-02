vuser_end()
{

	lr_think_time(16);

	lr_start_transaction("Logout");

	web_custom_request("logoutAuth", 
		"URL=https://57.191.5.114:8082/1.1.0.6/wtrui-web/v6.0/Proxy/login/logoutAuth", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t197.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"hash\":\"LH_lsk9nezZchJiXCvUHm8aFJE7ERxvLlgSMDNlkNy1j2I=\"}", 
		LAST);

	web_url("1.1.0.52_2", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t198.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=css/bootstrap-switch.min.css", ENDITEM, 
		"Url=css/custom.css", ENDITEM, 
		"Url=css/hotkeys.min.scss.css", ENDITEM, 
		"Url=css/ui-grid.min.css", ENDITEM, 
		"Url=css/font-awesome.min.css", ENDITEM, 
		"Url=libs/wtrui_lib_20171123080216.js", ENDITEM, 
		"Url=assets/locales/en_US/i18n.js", ENDITEM, 
		"Url=app/wtrui_app_20171123080216.js", ENDITEM, 
		"Url=WTDesktopHelp/Default.js", ENDITEM, 
		"Url=assets/data/data.json", ENDITEM, 
		"Url=assets/data/countryCodesName.json", ENDITEM, 
		"Url=assets/data/languages/en-US/delayedBags_en-US.json", ENDITEM, 
		"Url=assets/data/errorCodes.json", ENDITEM, 
		"Url=assets/data/bagData/imagepopup.json", ENDITEM, 
		"Url=assets/data/flightsData/airlines.json", ENDITEM, 
		"Url=assets/data/deliveryAddressType.json", ENDITEM, 
		"Url=assets/data/countryCellPhoneCode.json", ENDITEM, 
		"Url=assets/data/flightsData/airports.json", ENDITEM, 
		"Url=assets/data/forAirlineMandatory.json", ENDITEM, 
		"Url=assets/data/sendMessege.json", ENDITEM, 
		"Url=assets/data/IssuerCode.json", ENDITEM, 
		"Url=assets/data/transactionList.json", ENDITEM, 
		"Url=assets/data/btpIssuerCodes.json", ENDITEM, 
		"Url=assets/data/emailDomain.json", ENDITEM, 
		"Url=assets/data/brandInformation.json", ENDITEM, 
		"Url=assets/data/bagData/bagColor.json", ENDITEM, 
		"Url=assets/data/bagData/bagTypedesc.json", ENDITEM, 
		"Url=assets/data/bagData/bagDescDetailJson.json", ENDITEM, 
		"Url=assets/data/airlineIssuercodes.json", ENDITEM, 
		"Url=assets/data/btpDefault.json", ENDITEM, 
		"Url=assets/data/regioncode.json", ENDITEM, 
		"Url=assets/data/passengerData/primaryLanguage.json", ENDITEM, 
		"Url=assets/data/flightsData/citynames.json", ENDITEM, 
		"Url=assets/data/currencyCode.json", ENDITEM, 
		"Url=assets/data/bagData/bagsContent.json", ENDITEM, 
		"Url=assets/data/WTRUIReportsJsonData/reportsData.json", ENDITEM, 
		"Url=assets/data/lossCode.json", ENDITEM, 
		"Url=assets/data/WTRUIConfigurationJsonData/configurationData.json", ENDITEM, 
		"Url=assets/data/OfflineStoriesData/fileStatus.json", ENDITEM, 
		"Url=assets/data/handledAirlineCopyJson.json", ENDITEM, 
		"Url=assets/data/WTRUIConfigurationJsonData/airlineConfigurationTransactions.json", ENDITEM, 
		"Url=assets/data/claimSettlementCostJson.json", ENDITEM, 
		"Url=assets/data/phoneCode.json", ENDITEM, 
		"Url=assets/data/actionFileData/messageType.json", ENDITEM, 
		"Url=assets/data/PIR-language.json", ENDITEM, 
		"Url=assets/data/urlJson.json", ENDITEM, 
		"Url=assets/data/bagData/colorTypeDescLang.json", ENDITEM, 
		"Url=assets/data/passengerData/states.json", ENDITEM, 
		"Url=assets/data/passengerData/titleData.json", ENDITEM, 
		"Url=assets/data/externalUrl.json", ENDITEM, 
		"Url=assets/data/errorMessages/error_en-US.json", ENDITEM, 
		"Url=assets/data/completionTimeListAirline.json", ENDITEM, 
		"Url=assets/img/SITA_logo.png", ENDITEM, 
		LAST);

	web_add_header("User-Token", 
		"null");

	web_custom_request("validate_5", 
		"URL=https://57.191.5.114:8082/1.1.0.6/wtrui-web/v6.0/Proxy/login/validate", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t199.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("languages.json_2", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/languages/languages.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t200.inf", 
		"Mode=HTML", 
		LAST);

	web_url("footer.html_2", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/app/shared/footer/footer.html", 
		"Resource=0", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t201.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("User-Token", 
		"null");

	web_custom_request("validate_6", 
		"URL=https://57.191.5.114:8082/1.1.0.6/wtrui-web/v6.0/Proxy/login/validate", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t202.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("validate_7", 
		"URL=https://57.191.5.114:8082/1.1.0.6/wtrui-web/v6.0/Proxy/login/validate", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t203.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_revert_auto_header("User-Token");

	web_url("main.html_2", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/app/components/main/main.html", 
		"Resource=0", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t204.inf", 
		"Mode=HTML", 
		LAST);

	web_url("header.html_2", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/app/shared/header/header.html", 
		"Resource=0", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t205.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Logout",LR_AUTO);

	return 0;
}