Action()
{

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("users", 
		"URL=http://35.188.114.237:8088/api/v2/users", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/favicon.ico", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=81", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", "Referer=", ENDITEM, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", "Referer=", ENDITEM, 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"aapocclcgogkmnckokdopfmhonfmgoek,aohghmighlieiainnegkcijnfilokake,apdfllckaahabafndbhieahigkjlhalf,blpcfgokakmgnkcojhhkbfbldkacnbeo,felcaaldnbdncclmgdcncolpebgiejap,ghbmnnjooekpmoecnnnilnnbdlolhkhi,nmmhkkegccagdldgiimedpiccmgmieda,pjkljhegncpnkpknbcohdijeoejaedia,pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	web_add_header("X-Goog-Update-Interactivity", 
		"fg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-81.0.4044.92");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=9:210206860&cup2hreq=a93d04d9600ff47e3d4a628cc105d1e8be8ca448d3162cb277bb39b4cd0fdceb", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"aapocclcgogkmnckokdopfmhonfmgoek\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"installsource\":\"ondemand\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{2c947182-0ab2-46e7-bd48-bb5d8533839e}\",\"rd\":4919},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"aohghmighlieiainnegkcijnfilokake\",\"brand\":\"GCEU\",\"enabled\""
		":true,\"installedby\":\"internal\",\"installsource\":\"ondemand\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{dd57267d-3684-4c98-b4fc-8bd64b6cb7ed}\",\"rd\":4919},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"apdfllckaahabafndbhieahigkjlhalf\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"installsource\":\"ondemand\",\"packages\":{\"package\":[{\"fp\":\"2.14.2\"}]},\"ping\":{\"ping_freshness\":\"{e64c012f-3a43-48c9-bcc4-bfe40200c357"
		"}\",\"rd\":4919},\"updatecheck\":{},\"version\":\"14.2\"},{\"appid\":\"blpcfgokakmgnkcojhhkbfbldkacnbeo\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"installsource\":\"ondemand\",\"packages\":{\"package\":[{\"fp\":\"2.4.2.8\"}]},\"ping\":{\"ping_freshness\":\"{24cc8677-9516-48f3-9e0e-8af05dc9e2d1}\",\"rd\":4919},\"updatecheck\":{},\"version\":\"4.2.8\"},{\"appid\":\"felcaaldnbdncclmgdcncolpebgiejap\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\""
		"installsource\":\"ondemand\",\"packages\":{\"package\":[{\"fp\":\"2.1.2\"}]},\"ping\":{\"ping_freshness\":\"{83a80fa2-3919-400b-829a-85690c6e610d}\",\"rd\":4919},\"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"external\",\"installsource\":\"ondemand\",\"packages\":{\"package\":[{\"fp\":\"1.693458e8d61b08ad38d9dceec8d6204a74cfc0952a39dca6d1e6d4828a5cbcf4\"}]},\"ping\":{\"ping_freshness\":\""
		"{200b72c9-69c3-4198-94d6-7423c7a2a683}\",\"rd\":4919},\"updatecheck\":{},\"version\":\"1.11.0\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"other\",\"installsource\":\"ondemand\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.5\"}]},\"ping\":{\"ping_freshness\":\"{d1b4939f-5521-4801-9db1-6fe72ebc8f0e}\",\"rd\":4919},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"pjkljhegncpnkpknbcohdijeoejaedia\",\"brand\":\"GCEU\",\"enabled\":true"
		",\"installedby\":\"internal\",\"installsource\":\"ondemand\",\"packages\":{\"package\":[{\"fp\":\"2.8.2\"}]},\"ping\":{\"ping_freshness\":\"{7f9d7706-33e1-4e76-ae79-3ea5b226beb4}\",\"rd\":4919},\"updatecheck\":{},\"version\":\"8.2\"},{\"appid\":\"pkedcjkdefgpdelpbcmbmeomcjbeemfm\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"other\",\"installsource\":\"ondemand\",\"packages\":{\"package\":[{\"fp\":\"1.a44ab3a79e7d0e29ebc72404cfe5f992c09c022f54e1e6b1a6b7ed3086f1bc27\"}]},\"ping\":{\""
		"ping_freshness\":\"{5205371f-0941-4dd4-b71b-e61a6a252152}\",\"rd\":4919},\"updatecheck\":{},\"version\":\"8220.319.1.2\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"6.3.9600.19542\"},\"prodversion\":\"81.0.4044.92\",\"protocol\":\"3.1\",\"requestid\":\"{06692a9c-898f-472f-9c9a-e0e9dcfec80f}\",\"sessionid\":\"{247c53c7-4984-4132-867c-248b431c1d45}\""
		",\"updater\":{\"autoupdatecheckenabled\":false,\"ismachine\":true,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.451\"},\"updaterversion\":\"81.0.4044.92\"}}", 
		LAST);

	return 0;
}