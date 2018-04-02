/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 911
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_set_sockets_option("TLS_SNI", "0");

	web_url("1.1.0.52", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=fonts/fontawesome-webfont.woff?v=4.3.0", "Referer=https://57.191.5.114:8082/desktop/1.1.0.52/css/font-awesome.min.css", ENDITEM, 
		"Url=css/themes/main.css", ENDITEM, 
		"Url=assets/img/SITA_logo.png", ENDITEM, 
		"Url=css/themes/main_LH.css", ENDITEM, 
		LAST);

	web_url("data.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/data.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		LAST);

	web_url("airports.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/flightsData/airports.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		LAST);

	web_url("delayedBags_en-US.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/languages/en-US/delayedBags_en-US.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		LAST);

	web_url("imagepopup.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/bagData/imagepopup.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		LAST);

	web_url("primaryLanguage.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/passengerData/primaryLanguage.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		LAST);

	web_url("airlines.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/flightsData/airlines.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		LAST);

	web_url("completionTimeListAirline.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/completionTimeListAirline.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		LAST);

	web_url("phoneCode.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/phoneCode.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		LAST);

	web_url("deliveryAddressType.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/deliveryAddressType.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t107.inf", 
		"Mode=HTML", 
		LAST);

	web_url("sendMessege.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/sendMessege.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t108.inf", 
		"Mode=HTML", 
		LAST);

	web_url("countryCellPhoneCode.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/countryCellPhoneCode.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t109.inf", 
		"Mode=HTML", 
		LAST);

	web_url("titleData.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/passengerData/titleData.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t110.inf", 
		"Mode=HTML", 
		LAST);

	web_url("forAirlineMandatory.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/forAirlineMandatory.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t111.inf", 
		"Mode=HTML", 
		LAST);

	web_url("btpIssuerCodes.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/btpIssuerCodes.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t112.inf", 
		"Mode=HTML", 
		LAST);

	web_url("IssuerCode.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/IssuerCode.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t113.inf", 
		"Mode=HTML", 
		LAST);

	web_url("transactionList.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/transactionList.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t114.inf", 
		"Mode=HTML", 
		LAST);

	web_url("brandInformation.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/brandInformation.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t115.inf", 
		"Mode=HTML", 
		LAST);

	web_url("bagTypedesc.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/bagData/bagTypedesc.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t116.inf", 
		"Mode=HTML", 
		LAST);

	web_url("states.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/passengerData/states.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t117.inf", 
		"Mode=HTML", 
		LAST);

	web_url("bagColor.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/bagData/bagColor.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t118.inf", 
		"Mode=HTML", 
		LAST);

	web_url("bagDescDetailJson.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/bagData/bagDescDetailJson.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t119.inf", 
		"Mode=HTML", 
		LAST);

	web_url("airlineIssuercodes.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/airlineIssuercodes.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t120.inf", 
		"Mode=HTML", 
		LAST);

	web_url("citynames.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/flightsData/citynames.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t121.inf", 
		"Mode=HTML", 
		LAST);

	web_url("regioncode.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/regioncode.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		LAST);

	web_url("btpDefault.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/btpDefault.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		LAST);

	web_url("lossCode.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/lossCode.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		LAST);

	web_url("currencyCode.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/currencyCode.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		LAST);

	web_url("emailDomain.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/emailDomain.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		LAST);

	web_url("configurationData.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/WTRUIConfigurationJsonData/configurationData.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t127.inf", 
		"Mode=HTML", 
		LAST);

	web_url("airlineConfigurationTransactions.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/WTRUIConfigurationJsonData/airlineConfigurationTransactions.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		LAST);

	web_url("fileStatus.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/OfflineStoriesData/fileStatus.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t129.inf", 
		"Mode=HTML", 
		LAST);

	web_url("messageType.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/actionFileData/messageType.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 
		LAST);

	web_url("PIR-language.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/PIR-language.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		LAST);

	web_url("claimSettlementCostJson.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/claimSettlementCostJson.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t132.inf", 
		"Mode=HTML", 
		LAST);

	web_url("urlJson.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/urlJson.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t133.inf", 
		"Mode=HTML", 
		LAST);

	web_url("externalUrl.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/externalUrl.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t134.inf", 
		"Mode=HTML", 
		LAST);

	web_url("handledAirlineCopyJson.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/handledAirlineCopyJson.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t135.inf", 
		"Mode=HTML", 
		LAST);

	web_url("countryCodesName.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/countryCodesName.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t136.inf", 
		"Mode=HTML", 
		LAST);

	web_url("reportsData.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/WTRUIReportsJsonData/reportsData.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t137.inf", 
		"Mode=HTML", 
		LAST);

	web_url("colorTypeDescLang.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/bagData/colorTypeDescLang.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t138.inf", 
		"Mode=HTML", 
		LAST);

	web_url("error_en-US.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/errorMessages/error_en-US.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t139.inf", 
		"Mode=HTML", 
		LAST);

	web_url("errorCodes.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/errorCodes.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t140.inf", 
		"Mode=HTML", 
		LAST);

	web_url("localization_en_US.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/locales/localization_en_US.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t141.inf", 
		"Mode=HTML", 
		LAST);

	web_url("footer.html", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/app/shared/footer/footer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t142.inf", 
		"Mode=HTML", 
		LAST);

	web_url("main.html", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/app/components/main/main.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t143.inf", 
		"Mode=HTML", 
		LAST);

	web_url("bagsContent.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/bagData/bagsContent.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t144.inf", 
		"Mode=HTML", 
		LAST);

	web_url("languages.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/languages/languages.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t145.inf", 
		"Mode=HTML", 
		LAST);

	web_url("header.html", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/app/shared/header/header.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t146.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shortkeyLogin_en-US.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/shortFolder/shortkeyLogin_en-US.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t147.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Login_en-US.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/languages/en-US/Login_en-US.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t148.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(14);

	lr_start_transaction("Login");

	web_custom_request("loginAuth", 
		"URL=https://57.191.5.114:8082/1.1.0.6/wtrui-web/v6.0/Proxy/login/loginAuth", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t149.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"user\":{\"userId\":\"WTDADMIN\",\"companyId\":\"LH\",\"password\":\"Sita@123\",\"stationType\":\"A\"},\"captcha\":{\"capId\":\"No_Captcha\"}}", 
		LAST);

	web_add_header("User-Token", 
		"null");

	web_custom_request("validate", 
		"URL=https://57.191.5.114:8082/1.1.0.6/wtrui-web/v6.0/Proxy/login/validate", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t150.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("landing.html", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/app/components/homeBaggage/landing.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t151.inf", 
		"Mode=HTML", 
		LAST);

	web_url("grid.html", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/app/components/homeBaggage/grid.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t152.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	web_url("shortcut-help.html", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/app/components/login/shortcut-help.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t153.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("User-Token", 
		"LH_lsk9nezZchJiXCvUHm8aFJE7ERxvLlgSMDNlkNy1j2I=");

	web_custom_request("read", 
		"URL=https://57.191.5.114:8082/1.1.0.6/baggage/wtrui-web/v6.0/config/stationsattributes/read", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t154.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"WTR_StationAttributesReadRQ\":{\"POS\":{\"Source\":[{\"AirlineVendorID\":\"LH\"}]},\"StationAirline\":{\"AirlineCode\":\"LH\",\"StationCode\":\"AAA\"},\"AgentID\":\"WTDADMIN\",\"Version\":0.1}}", 
		LAST);

	web_url("landing_en-US.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/languages/en-US/landing_en-US.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t155.inf", 
		"Mode=HTML", 
		LAST);

	web_url("prefill_data_errors_en-US.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/languages/en-US/prefill_data_errors_en-US.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t156.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shortkeyOne_en-US.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/shortFolder/shortkeyOne_en-US.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t157.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shortkeyThr.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/shortFolder/shortkeyThr.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t158.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shortKeyManageFileSummary.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/shortFolder/shortKeyManageFileSummary.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t159.inf", 
		"Mode=HTML", 
		LAST);

	web_url("convertCurrency.html", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/app/components/WTRUIReports/cost/convertCurrency/Templates/convertCurrency.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t160.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("User-Token", 
		"LH_lsk9nezZchJiXCvUHm8aFJE7ERxvLlgSMDNlkNy1j2I=");

	web_custom_request("userstations", 
		"URL=https://57.191.5.114:8082/1.1.0.6/wtrui-web/proxy/config/station/userstations", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t161.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"WTR_StationListReadRQ\":{\"POS\":{\"Source\":[{\"AirlineVendorID\":\"LH\"}]},\"Options\":{\"Airline\":\"LH\",\"Status\":\"T\"},\"AgentID\":\"WTDADMIN\",\"Target\":\"Production\",\"Version\":0.1}}", 
		LAST);

	web_custom_request("getmandatories", 
		"URL=https://57.191.5.114:8082/1.1.0.6/wtrui-web/v6.0/Proxy/airlines/getmandatories", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t162.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"airlineCode\":\"LH\",\"stationCode\":\"AAA\",\"transaction\":false}", 
		LAST);

	web_revert_auto_header("User-Token");

	web_url("sendDelayFile.html", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/app/components/homeBaggage/sendDelayFile.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t163.inf", 
		"Mode=HTML", 
		LAST);

	web_url("dashBoardTemplate.html", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/app/components/homeBaggage/dashBoard/dashBoardTemplates/dashBoardTemplate.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t164.inf", 
		"Mode=HTML", 
		LAST);

	web_url("emailMessage.html", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/app/components/action/Templates/message/emailMessage.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t165.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("User-Token", 
		"LH_lsk9nezZchJiXCvUHm8aFJE7ERxvLlgSMDNlkNy1j2I=");

	web_custom_request("read_2", 
		"URL=https://57.191.5.114:8082/1.1.0.6/baggage/wtrui-web/v6.0/config/stationsattributes/read", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t166.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"WTR_StationAttributesReadRQ\":{\"POS\":{\"Source\":[{\"AirlineVendorID\":\"LH\"}]},\"StationAirline\":{\"AirlineCode\":\"LH\",\"StationCode\":\"AAA\"},\"AgentID\":\"WTDADMIN\",\"Version\":0.1}}", 
		LAST);

	web_url("reassign.html", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/app/components/action/Templates/message/reassign.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t167.inf", 
		"Mode=HTML", 
		LAST);

	web_url("newMessage.html", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/app/components/action/Templates/message/newMessage.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t168.inf", 
		"Mode=HTML", 
		LAST);

	web_url("reopen.html", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/app/components/homeBaggage/reopenDelayedFile/reopen.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t169.inf", 
		"Mode=HTML", 
		LAST);

	web_url("reactiveTemplate.html", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/app/components/reactivateFile/reactiveTemplate.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t170.inf", 
		"Mode=HTML", 
		LAST);

	web_url("rematchModal.html", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/app/components/homeBaggage/rematchModal/rematchModal.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t171.inf", 
		"Mode=HTML", 
		LAST);

	web_url("sendTeletypeMessage.html", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/app/components/Miscellaneous/Templates/sendTeletypeMessage.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t172.inf", 
		"Mode=HTML", 
		LAST);

	web_url("cloneStation.html", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/app/components/reports/configStation/cloneStation/Templates/cloneStation.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t173.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shortKeyHelp.json", 
		"URL=https://57.191.5.114:8082/desktop/1.1.0.52/assets/data/shortFolder/shortKeyHelp.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://57.191.5.114:8082/desktop/1.1.0.52/", 
		"Snapshot=t174.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/desktop/1.1.0.52/assets/img/SITA_logo_LH_2.png", "Referer=https://57.191.5.114:8082/desktop/1.1.0.52/css/themes/main_LH.css", ENDITEM, 
		LAST);

	lr_end_transaction("Login",LR_AUTO);

	return 0;
}
