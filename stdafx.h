// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>



// TODO: reference additional headers your program requires here
// ��������
#pragma comment(linker, "/EXPORT:AddIPAddress=FkDrcom.AddIPAddress,@1")
#pragma comment(linker, "/EXPORT:AllocateAndGetInterfaceInfoFromStack=FkDrcom.AllocateAndGetInterfaceInfoFromStack,@2")
#pragma comment(linker, "/EXPORT:AllocateAndGetIpAddrTableFromStack=FkDrcom.AllocateAndGetIpAddrTableFromStack,@3")
#pragma comment(linker, "/EXPORT:CPNatfwtCreateProviderInstance=FkDrcom.CPNatfwtCreateProviderInstance,@4")
#pragma comment(linker, "/EXPORT:CPNatfwtDeregisterProviderInstance=FkDrcom.CPNatfwtDeregisterProviderInstance,@5")
#pragma comment(linker, "/EXPORT:CPNatfwtDestroyProviderInstance=FkDrcom.CPNatfwtDestroyProviderInstance,@6")
#pragma comment(linker, "/EXPORT:CPNatfwtIndicateReceivedBuffers=FkDrcom.CPNatfwtIndicateReceivedBuffers,@7")
#pragma comment(linker, "/EXPORT:CPNatfwtRegisterProviderInstance=FkDrcom.CPNatfwtRegisterProviderInstance,@8")
#pragma comment(linker, "/EXPORT:CancelIPChangeNotify=FkDrcom.CancelIPChangeNotify,@9")
#pragma comment(linker, "/EXPORT:CancelMibChangeNotify2=FkDrcom.CancelMibChangeNotify2,@10")
#pragma comment(linker, "/EXPORT:ConvertGuidToStringA=FkDrcom.ConvertGuidToStringA,@11")
#pragma comment(linker, "/EXPORT:ConvertGuidToStringW=FkDrcom.ConvertGuidToStringW,@12")
#pragma comment(linker, "/EXPORT:ConvertInterfaceAliasToLuid=FkDrcom.ConvertInterfaceAliasToLuid,@13")
#pragma comment(linker, "/EXPORT:ConvertInterfaceGuidToLuid=FkDrcom.ConvertInterfaceGuidToLuid,@14")
#pragma comment(linker, "/EXPORT:ConvertInterfaceIndexToLuid=FkDrcom.ConvertInterfaceIndexToLuid,@15")
#pragma comment(linker, "/EXPORT:ConvertInterfaceLuidToAlias=FkDrcom.ConvertInterfaceLuidToAlias,@16")
#pragma comment(linker, "/EXPORT:ConvertInterfaceLuidToGuid=FkDrcom.ConvertInterfaceLuidToGuid,@17")
#pragma comment(linker, "/EXPORT:ConvertInterfaceLuidToIndex=FkDrcom.ConvertInterfaceLuidToIndex,@18")
#pragma comment(linker, "/EXPORT:ConvertInterfaceLuidToNameA=FkDrcom.ConvertInterfaceLuidToNameA,@19")
#pragma comment(linker, "/EXPORT:ConvertInterfaceLuidToNameW=FkDrcom.ConvertInterfaceLuidToNameW,@20")
#pragma comment(linker, "/EXPORT:ConvertInterfaceNameToLuidA=FkDrcom.ConvertInterfaceNameToLuidA,@21")
#pragma comment(linker, "/EXPORT:ConvertInterfaceNameToLuidW=FkDrcom.ConvertInterfaceNameToLuidW,@22")
#pragma comment(linker, "/EXPORT:ConvertInterfacePhysicalAddressToLuid=FkDrcom.ConvertInterfacePhysicalAddressToLuid,@23")
#pragma comment(linker, "/EXPORT:ConvertIpv4MaskToLength=FkDrcom.ConvertIpv4MaskToLength,@24")
#pragma comment(linker, "/EXPORT:ConvertLengthToIpv4Mask=FkDrcom.ConvertLengthToIpv4Mask,@25")
#pragma comment(linker, "/EXPORT:ConvertRemoteInterfaceAliasToLuid=FkDrcom.ConvertRemoteInterfaceAliasToLuid,@26")
#pragma comment(linker, "/EXPORT:ConvertRemoteInterfaceGuidToLuid=FkDrcom.ConvertRemoteInterfaceGuidToLuid,@27")
#pragma comment(linker, "/EXPORT:ConvertRemoteInterfaceIndexToLuid=FkDrcom.ConvertRemoteInterfaceIndexToLuid,@28")
#pragma comment(linker, "/EXPORT:ConvertRemoteInterfaceLuidToAlias=FkDrcom.ConvertRemoteInterfaceLuidToAlias,@29")
#pragma comment(linker, "/EXPORT:ConvertRemoteInterfaceLuidToGuid=FkDrcom.ConvertRemoteInterfaceLuidToGuid,@30")
#pragma comment(linker, "/EXPORT:ConvertRemoteInterfaceLuidToIndex=FkDrcom.ConvertRemoteInterfaceLuidToIndex,@31")
#pragma comment(linker, "/EXPORT:ConvertStringToGuidA=FkDrcom.ConvertStringToGuidA,@32")
#pragma comment(linker, "/EXPORT:ConvertStringToGuidW=FkDrcom.ConvertStringToGuidW,@33")
#pragma comment(linker, "/EXPORT:ConvertStringToInterfacePhysicalAddress=FkDrcom.ConvertStringToInterfacePhysicalAddress,@34")
#pragma comment(linker, "/EXPORT:CreateAnycastIpAddressEntry=FkDrcom.CreateAnycastIpAddressEntry,@35")
#pragma comment(linker, "/EXPORT:CreateIpForwardEntry2=FkDrcom.CreateIpForwardEntry2,@36")
#pragma comment(linker, "/EXPORT:CreateIpForwardEntry=FkDrcom.CreateIpForwardEntry,@37")
#pragma comment(linker, "/EXPORT:CreateIpNetEntry2=FkDrcom.CreateIpNetEntry2,@38")
#pragma comment(linker, "/EXPORT:CreateIpNetEntry=FkDrcom.CreateIpNetEntry,@39")
#pragma comment(linker, "/EXPORT:CreatePersistentTcpPortReservation=FkDrcom.CreatePersistentTcpPortReservation,@40")
#pragma comment(linker, "/EXPORT:CreatePersistentUdpPortReservation=FkDrcom.CreatePersistentUdpPortReservation,@41")
#pragma comment(linker, "/EXPORT:CreateProxyArpEntry=FkDrcom.CreateProxyArpEntry,@42")
#pragma comment(linker, "/EXPORT:CreateSortedAddressPairs=FkDrcom.CreateSortedAddressPairs,@43")
#pragma comment(linker, "/EXPORT:CreateUnicastIpAddressEntry=FkDrcom.CreateUnicastIpAddressEntry,@44")
#pragma comment(linker, "/EXPORT:DeleteAnycastIpAddressEntry=FkDrcom.DeleteAnycastIpAddressEntry,@45")
#pragma comment(linker, "/EXPORT:DeleteIPAddress=FkDrcom.DeleteIPAddress,@46")
#pragma comment(linker, "/EXPORT:DeleteIpForwardEntry2=FkDrcom.DeleteIpForwardEntry2,@47")
#pragma comment(linker, "/EXPORT:DeleteIpForwardEntry=FkDrcom.DeleteIpForwardEntry,@48")
#pragma comment(linker, "/EXPORT:DeleteIpNetEntry2=FkDrcom.DeleteIpNetEntry2,@49")
#pragma comment(linker, "/EXPORT:DeleteIpNetEntry=FkDrcom.DeleteIpNetEntry,@50")
#pragma comment(linker, "/EXPORT:DeletePersistentTcpPortReservation=FkDrcom.DeletePersistentTcpPortReservation,@51")
#pragma comment(linker, "/EXPORT:DeletePersistentUdpPortReservation=FkDrcom.DeletePersistentUdpPortReservation,@52")
#pragma comment(linker, "/EXPORT:DeleteProxyArpEntry=FkDrcom.DeleteProxyArpEntry,@53")
#pragma comment(linker, "/EXPORT:DeleteUnicastIpAddressEntry=FkDrcom.DeleteUnicastIpAddressEntry,@54")
#pragma comment(linker, "/EXPORT:DisableMediaSense=FkDrcom.DisableMediaSense,@55")
#pragma comment(linker, "/EXPORT:EnableRouter=FkDrcom.EnableRouter,@56")
#pragma comment(linker, "/EXPORT:FlushIpNetTable2=FkDrcom.FlushIpNetTable2,@57")
#pragma comment(linker, "/EXPORT:FlushIpNetTable=FkDrcom.FlushIpNetTable,@58")
#pragma comment(linker, "/EXPORT:FlushIpPathTable=FkDrcom.FlushIpPathTable,@59")
#pragma comment(linker, "/EXPORT:FreeMibTable=FkDrcom.FreeMibTable,@60")
#pragma comment(linker, "/EXPORT:GetAdapterIndex=FkDrcom.GetAdapterIndex,@61")
#pragma comment(linker, "/EXPORT:GetAdapterOrderMap=FkDrcom.GetAdapterOrderMap,@62")
#pragma comment(linker, "/EXPORT:GetAdaptersAddresses=FkDrcom.GetAdaptersAddresses,@63")
#pragma comment(linker, "/EXPORT:GetAdaptersInfo=FkDrcom.GetAdaptersInfo,@64")
#pragma comment(linker, "/EXPORT:GetAnycastIpAddressEntry=FkDrcom.GetAnycastIpAddressEntry,@65")
#pragma comment(linker, "/EXPORT:GetAnycastIpAddressTable=FkDrcom.GetAnycastIpAddressTable,@66")
#pragma comment(linker, "/EXPORT:GetBestInterface=FkDrcom.GetBestInterface,@67")
#pragma comment(linker, "/EXPORT:GetBestInterfaceEx=FkDrcom.GetBestInterfaceEx,@68")
#pragma comment(linker, "/EXPORT:GetBestRoute2=FkDrcom.GetBestRoute2,@69")
#pragma comment(linker, "/EXPORT:GetBestRoute=FkDrcom.GetBestRoute,@70")
#pragma comment(linker, "/EXPORT:GetCurrentThreadCompartmentId=FkDrcom.GetCurrentThreadCompartmentId,@71")
#pragma comment(linker, "/EXPORT:GetExtendedTcpTable=FkDrcom.GetExtendedTcpTable,@72")
#pragma comment(linker, "/EXPORT:GetExtendedUdpTable=FkDrcom.GetExtendedUdpTable,@73")
#pragma comment(linker, "/EXPORT:GetFriendlyIfIndex=FkDrcom.GetFriendlyIfIndex,@74")
#pragma comment(linker, "/EXPORT:GetIcmpStatistics=FkDrcom.GetIcmpStatistics,@75")
#pragma comment(linker, "/EXPORT:GetIcmpStatisticsEx=FkDrcom.GetIcmpStatisticsEx,@76")
#pragma comment(linker, "/EXPORT:GetIfEntry2=FkDrcom.GetIfEntry2,@77")
#pragma comment(linker, "/EXPORT:GetIfEntry=FkDrcom.GetIfEntry,@78")
#pragma comment(linker, "/EXPORT:GetIfStackTable=FkDrcom.GetIfStackTable,@79")
#pragma comment(linker, "/EXPORT:GetIfTable2=FkDrcom.GetIfTable2,@80")
#pragma comment(linker, "/EXPORT:GetIfTable2Ex=FkDrcom.GetIfTable2Ex,@81")
#pragma comment(linker, "/EXPORT:GetIfTable=FkDrcom.GetIfTable,@82")
#pragma comment(linker, "/EXPORT:GetInterfaceInfo=FkDrcom.GetInterfaceInfo,@83")
#pragma comment(linker, "/EXPORT:GetInvertedIfStackTable=FkDrcom.GetInvertedIfStackTable,@84")
#pragma comment(linker, "/EXPORT:GetIpAddrTable=FkDrcom.GetIpAddrTable,@85")
#pragma comment(linker, "/EXPORT:GetIpErrorString=FkDrcom.GetIpErrorString,@86")
#pragma comment(linker, "/EXPORT:GetIpForwardEntry2=FkDrcom.GetIpForwardEntry2,@87")
#pragma comment(linker, "/EXPORT:GetIpForwardTable2=FkDrcom.GetIpForwardTable2,@88")
#pragma comment(linker, "/EXPORT:GetIpForwardTable=FkDrcom.GetIpForwardTable,@89")
#pragma comment(linker, "/EXPORT:GetIpInterfaceEntry=FkDrcom.GetIpInterfaceEntry,@90")
#pragma comment(linker, "/EXPORT:GetIpInterfaceTable=FkDrcom.GetIpInterfaceTable,@91")
#pragma comment(linker, "/EXPORT:GetIpNetEntry2=FkDrcom.GetIpNetEntry2,@92")
#pragma comment(linker, "/EXPORT:GetIpNetTable2=FkDrcom.GetIpNetTable2,@93")
#pragma comment(linker, "/EXPORT:GetIpNetTable=FkDrcom.GetIpNetTable,@94")
#pragma comment(linker, "/EXPORT:GetIpPathEntry=FkDrcom.GetIpPathEntry,@95")
#pragma comment(linker, "/EXPORT:GetIpPathTable=FkDrcom.GetIpPathTable,@96")
#pragma comment(linker, "/EXPORT:GetIpStatistics=FkDrcom.GetIpStatistics,@97")
#pragma comment(linker, "/EXPORT:GetIpStatisticsEx=FkDrcom.GetIpStatisticsEx,@98")
#pragma comment(linker, "/EXPORT:GetMulticastIpAddressEntry=FkDrcom.GetMulticastIpAddressEntry,@99")
#pragma comment(linker, "/EXPORT:GetMulticastIpAddressTable=FkDrcom.GetMulticastIpAddressTable,@100")
#pragma comment(linker, "/EXPORT:GetNetworkInformation=FkDrcom.GetNetworkInformation,@101")
#pragma comment(linker, "/EXPORT:GetNetworkParams=FkDrcom.GetNetworkParams,@102")
#pragma comment(linker, "/EXPORT:GetNumberOfInterfaces=FkDrcom.GetNumberOfInterfaces,@103")
#pragma comment(linker, "/EXPORT:GetOwnerModuleFromPidAndInfo=FkDrcom.GetOwnerModuleFromPidAndInfo,@104")
#pragma comment(linker, "/EXPORT:GetOwnerModuleFromTcp6Entry=FkDrcom.GetOwnerModuleFromTcp6Entry,@105")
#pragma comment(linker, "/EXPORT:GetOwnerModuleFromTcpEntry=FkDrcom.GetOwnerModuleFromTcpEntry,@106")
#pragma comment(linker, "/EXPORT:GetOwnerModuleFromUdp6Entry=FkDrcom.GetOwnerModuleFromUdp6Entry,@107")
#pragma comment(linker, "/EXPORT:GetOwnerModuleFromUdpEntry=FkDrcom.GetOwnerModuleFromUdpEntry,@108")
#pragma comment(linker, "/EXPORT:GetPerAdapterInfo=FkDrcom.GetPerAdapterInfo,@109")
#pragma comment(linker, "/EXPORT:GetPerTcp6ConnectionEStats=FkDrcom.GetPerTcp6ConnectionEStats,@110")
#pragma comment(linker, "/EXPORT:GetPerTcp6ConnectionStats=FkDrcom.GetPerTcp6ConnectionStats,@111")
#pragma comment(linker, "/EXPORT:GetPerTcpConnectionEStats=FkDrcom.GetPerTcpConnectionEStats,@112")
#pragma comment(linker, "/EXPORT:GetPerTcpConnectionStats=FkDrcom.GetPerTcpConnectionStats,@113")
#pragma comment(linker, "/EXPORT:GetRTTAndHopCount=FkDrcom.GetRTTAndHopCount,@114")
#pragma comment(linker, "/EXPORT:GetSessionCompartmentId=FkDrcom.GetSessionCompartmentId,@115")
#pragma comment(linker, "/EXPORT:GetTcp6Table2=FkDrcom.GetTcp6Table2,@116")
#pragma comment(linker, "/EXPORT:GetTcp6Table=FkDrcom.GetTcp6Table,@117")
#pragma comment(linker, "/EXPORT:GetTcpStatistics=FkDrcom.GetTcpStatistics,@118")
#pragma comment(linker, "/EXPORT:GetTcpStatisticsEx=FkDrcom.GetTcpStatisticsEx,@119")
#pragma comment(linker, "/EXPORT:GetTcpTable2=FkDrcom.GetTcpTable2,@120")
#pragma comment(linker, "/EXPORT:GetTcpTable=FkDrcom.GetTcpTable,@121")
#pragma comment(linker, "/EXPORT:GetTeredoPort=FkDrcom.GetTeredoPort,@122")
#pragma comment(linker, "/EXPORT:GetUdp6Table=FkDrcom.GetUdp6Table,@123")
#pragma comment(linker, "/EXPORT:GetUdpStatistics=FkDrcom.GetUdpStatistics,@124")
#pragma comment(linker, "/EXPORT:GetUdpStatisticsEx=FkDrcom.GetUdpStatisticsEx,@125")
#pragma comment(linker, "/EXPORT:GetUdpTable=FkDrcom.GetUdpTable,@126")
#pragma comment(linker, "/EXPORT:GetUniDirectionalAdapterInfo=FkDrcom.GetUniDirectionalAdapterInfo,@127")
#pragma comment(linker, "/EXPORT:GetUnicastIpAddressEntry=FkDrcom.GetUnicastIpAddressEntry,@128")
#pragma comment(linker, "/EXPORT:GetUnicastIpAddressTable=FkDrcom.GetUnicastIpAddressTable,@129")
#pragma comment(linker, "/EXPORT:Icmp6CreateFile=FkDrcom.Icmp6CreateFile,@130")
#pragma comment(linker, "/EXPORT:Icmp6ParseReplies=FkDrcom.Icmp6ParseReplies,@131")
#pragma comment(linker, "/EXPORT:Icmp6SendEcho2=FkDrcom.Icmp6SendEcho2,@132")
#pragma comment(linker, "/EXPORT:IcmpCloseHandle=FkDrcom.IcmpCloseHandle,@133")
#pragma comment(linker, "/EXPORT:IcmpCreateFile=FkDrcom.IcmpCreateFile,@134")
#pragma comment(linker, "/EXPORT:IcmpParseReplies=FkDrcom.IcmpParseReplies,@135")
#pragma comment(linker, "/EXPORT:IcmpSendEcho2=FkDrcom.IcmpSendEcho2,@136")
#pragma comment(linker, "/EXPORT:IcmpSendEcho2Ex=FkDrcom.IcmpSendEcho2Ex,@137")
#pragma comment(linker, "/EXPORT:IcmpSendEcho=FkDrcom.IcmpSendEcho,@138")
#pragma comment(linker, "/EXPORT:InitializeIpForwardEntry=FkDrcom.InitializeIpForwardEntry,@139")
#pragma comment(linker, "/EXPORT:InitializeIpInterfaceEntry=FkDrcom.InitializeIpInterfaceEntry,@140")
#pragma comment(linker, "/EXPORT:InitializeUnicastIpAddressEntry=FkDrcom.InitializeUnicastIpAddressEntry,@141")
#pragma comment(linker, "/EXPORT:InternalCleanupPersistentStore=FkDrcom.InternalCleanupPersistentStore,@142")
#pragma comment(linker, "/EXPORT:InternalCreateAnycastIpAddressEntry=FkDrcom.InternalCreateAnycastIpAddressEntry,@143")
#pragma comment(linker, "/EXPORT:InternalCreateIpForwardEntry2=FkDrcom.InternalCreateIpForwardEntry2,@144")
#pragma comment(linker, "/EXPORT:InternalCreateIpForwardEntry=FkDrcom.InternalCreateIpForwardEntry,@145")
#pragma comment(linker, "/EXPORT:InternalCreateIpNetEntry2=FkDrcom.InternalCreateIpNetEntry2,@146")
#pragma comment(linker, "/EXPORT:InternalCreateIpNetEntry=FkDrcom.InternalCreateIpNetEntry,@147")
#pragma comment(linker, "/EXPORT:InternalCreateUnicastIpAddressEntry=FkDrcom.InternalCreateUnicastIpAddressEntry,@148")
#pragma comment(linker, "/EXPORT:InternalDeleteAnycastIpAddressEntry=FkDrcom.InternalDeleteAnycastIpAddressEntry,@149")
#pragma comment(linker, "/EXPORT:InternalDeleteIpForwardEntry2=FkDrcom.InternalDeleteIpForwardEntry2,@150")
#pragma comment(linker, "/EXPORT:InternalDeleteIpForwardEntry=FkDrcom.InternalDeleteIpForwardEntry,@151")
#pragma comment(linker, "/EXPORT:InternalDeleteIpNetEntry2=FkDrcom.InternalDeleteIpNetEntry2,@152")
#pragma comment(linker, "/EXPORT:InternalDeleteIpNetEntry=FkDrcom.InternalDeleteIpNetEntry,@153")
#pragma comment(linker, "/EXPORT:InternalDeleteUnicastIpAddressEntry=FkDrcom.InternalDeleteUnicastIpAddressEntry,@154")
#pragma comment(linker, "/EXPORT:InternalFindInterfaceByAddress=FkDrcom.InternalFindInterfaceByAddress,@155")
#pragma comment(linker, "/EXPORT:InternalGetAnycastIpAddressEntry=FkDrcom.InternalGetAnycastIpAddressEntry,@156")
#pragma comment(linker, "/EXPORT:InternalGetAnycastIpAddressTable=FkDrcom.InternalGetAnycastIpAddressTable,@157")
#pragma comment(linker, "/EXPORT:InternalGetForwardIpTable2=FkDrcom.InternalGetForwardIpTable2,@158")
#pragma comment(linker, "/EXPORT:InternalGetIfEntry2=FkDrcom.InternalGetIfEntry2,@159")
#pragma comment(linker, "/EXPORT:InternalGetIfTable2=FkDrcom.InternalGetIfTable2,@160")
#pragma comment(linker, "/EXPORT:InternalGetIfTable=FkDrcom.InternalGetIfTable,@161")
#pragma comment(linker, "/EXPORT:InternalGetIpAddrTable=FkDrcom.InternalGetIpAddrTable,@162")
#pragma comment(linker, "/EXPORT:InternalGetIpForwardEntry2=FkDrcom.InternalGetIpForwardEntry2,@163")
#pragma comment(linker, "/EXPORT:InternalGetIpForwardTable=FkDrcom.InternalGetIpForwardTable,@164")
#pragma comment(linker, "/EXPORT:InternalGetIpInterfaceEntry=FkDrcom.InternalGetIpInterfaceEntry,@165")
#pragma comment(linker, "/EXPORT:InternalGetIpInterfaceTable=FkDrcom.InternalGetIpInterfaceTable,@166")
#pragma comment(linker, "/EXPORT:InternalGetIpNetEntry2=FkDrcom.InternalGetIpNetEntry2,@167")
#pragma comment(linker, "/EXPORT:InternalGetIpNetTable2=FkDrcom.InternalGetIpNetTable2,@168")
#pragma comment(linker, "/EXPORT:InternalGetIpNetTable=FkDrcom.InternalGetIpNetTable,@169")
#pragma comment(linker, "/EXPORT:InternalGetMulticastIpAddressEntry=FkDrcom.InternalGetMulticastIpAddressEntry,@170")
#pragma comment(linker, "/EXPORT:InternalGetMulticastIpAddressTable=FkDrcom.InternalGetMulticastIpAddressTable,@171")
#pragma comment(linker, "/EXPORT:InternalGetTcp6Table2=FkDrcom.InternalGetTcp6Table2,@172")
#pragma comment(linker, "/EXPORT:InternalGetTcp6TableWithOwnerModule=FkDrcom.InternalGetTcp6TableWithOwnerModule,@173")
#pragma comment(linker, "/EXPORT:InternalGetTcp6TableWithOwnerPid=FkDrcom.InternalGetTcp6TableWithOwnerPid,@174")
#pragma comment(linker, "/EXPORT:InternalGetTcpTable2=FkDrcom.InternalGetTcpTable2,@175")
#pragma comment(linker, "/EXPORT:InternalGetTcpTable=FkDrcom.InternalGetTcpTable,@176")
#pragma comment(linker, "/EXPORT:InternalGetTcpTableEx=FkDrcom.InternalGetTcpTableEx,@177")
#pragma comment(linker, "/EXPORT:InternalGetTcpTableWithOwnerModule=FkDrcom.InternalGetTcpTableWithOwnerModule,@178")
#pragma comment(linker, "/EXPORT:InternalGetTcpTableWithOwnerPid=FkDrcom.InternalGetTcpTableWithOwnerPid,@179")
#pragma comment(linker, "/EXPORT:InternalGetTunnelPhysicalAdapter=FkDrcom.InternalGetTunnelPhysicalAdapter,@180")
#pragma comment(linker, "/EXPORT:InternalGetUdp6TableWithOwnerModule=FkDrcom.InternalGetUdp6TableWithOwnerModule,@181")
#pragma comment(linker, "/EXPORT:InternalGetUdp6TableWithOwnerPid=FkDrcom.InternalGetUdp6TableWithOwnerPid,@182")
#pragma comment(linker, "/EXPORT:InternalGetUdpTable=FkDrcom.InternalGetUdpTable,@183")
#pragma comment(linker, "/EXPORT:InternalGetUdpTableEx=FkDrcom.InternalGetUdpTableEx,@184")
#pragma comment(linker, "/EXPORT:InternalGetUdpTableWithOwnerModule=FkDrcom.InternalGetUdpTableWithOwnerModule,@185")
#pragma comment(linker, "/EXPORT:InternalGetUdpTableWithOwnerPid=FkDrcom.InternalGetUdpTableWithOwnerPid,@186")
#pragma comment(linker, "/EXPORT:InternalGetUnicastIpAddressEntry=FkDrcom.InternalGetUnicastIpAddressEntry,@187")
#pragma comment(linker, "/EXPORT:InternalGetUnicastIpAddressTable=FkDrcom.InternalGetUnicastIpAddressTable,@188")
#pragma comment(linker, "/EXPORT:InternalSetIfEntry=FkDrcom.InternalSetIfEntry,@189")
#pragma comment(linker, "/EXPORT:InternalSetIpForwardEntry2=FkDrcom.InternalSetIpForwardEntry2,@190")
#pragma comment(linker, "/EXPORT:InternalSetIpForwardEntry=FkDrcom.InternalSetIpForwardEntry,@191")
#pragma comment(linker, "/EXPORT:InternalSetIpInterfaceEntry=FkDrcom.InternalSetIpInterfaceEntry,@192")
#pragma comment(linker, "/EXPORT:InternalSetIpNetEntry2=FkDrcom.InternalSetIpNetEntry2,@193")
#pragma comment(linker, "/EXPORT:InternalSetIpNetEntry=FkDrcom.InternalSetIpNetEntry,@194")
#pragma comment(linker, "/EXPORT:InternalSetIpStats=FkDrcom.InternalSetIpStats,@195")
#pragma comment(linker, "/EXPORT:InternalSetTcpEntry=FkDrcom.InternalSetTcpEntry,@196")
#pragma comment(linker, "/EXPORT:InternalSetTeredoPort=FkDrcom.InternalSetTeredoPort,@197")
#pragma comment(linker, "/EXPORT:InternalSetUnicastIpAddressEntry=FkDrcom.InternalSetUnicastIpAddressEntry,@198")
#pragma comment(linker, "/EXPORT:IpReleaseAddress=FkDrcom.IpReleaseAddress,@199")
#pragma comment(linker, "/EXPORT:IpRenewAddress=FkDrcom.IpRenewAddress,@200")
#pragma comment(linker, "/EXPORT:LookupPersistentTcpPortReservation=FkDrcom.LookupPersistentTcpPortReservation,@201")
#pragma comment(linker, "/EXPORT:LookupPersistentUdpPortReservation=FkDrcom.LookupPersistentUdpPortReservation,@202")
#pragma comment(linker, "/EXPORT:NTPTimeToNTFileTime=FkDrcom.NTPTimeToNTFileTime,@203")
#pragma comment(linker, "/EXPORT:NTTimeToNTPTime=FkDrcom.NTTimeToNTPTime,@204")
#pragma comment(linker, "/EXPORT:NhGetGuidFromInterfaceName=FkDrcom.NhGetGuidFromInterfaceName,@205")
#pragma comment(linker, "/EXPORT:NhGetInterfaceDescriptionFromGuid=FkDrcom.NhGetInterfaceDescriptionFromGuid,@206")
#pragma comment(linker, "/EXPORT:NhGetInterfaceNameFromDeviceGuid=FkDrcom.NhGetInterfaceNameFromDeviceGuid,@207")
#pragma comment(linker, "/EXPORT:NhGetInterfaceNameFromGuid=FkDrcom.NhGetInterfaceNameFromGuid,@208")
#pragma comment(linker, "/EXPORT:NhpAllocateAndGetInterfaceInfoFromStack=FkDrcom.NhpAllocateAndGetInterfaceInfoFromStack,@209")
#pragma comment(linker, "/EXPORT:NotifyAddrChange=FkDrcom.NotifyAddrChange,@210")
#pragma comment(linker, "/EXPORT:NotifyIpInterfaceChange=FkDrcom.NotifyIpInterfaceChange,@211")
#pragma comment(linker, "/EXPORT:NotifyRouteChange2=FkDrcom.NotifyRouteChange2,@212")
#pragma comment(linker, "/EXPORT:NotifyRouteChange=FkDrcom.NotifyRouteChange,@213")
#pragma comment(linker, "/EXPORT:NotifyStableUnicastIpAddressTable=FkDrcom.NotifyStableUnicastIpAddressTable,@214")
#pragma comment(linker, "/EXPORT:NotifyTeredoPortChange=FkDrcom.NotifyTeredoPortChange,@215")
#pragma comment(linker, "/EXPORT:NotifyUnicastIpAddressChange=FkDrcom.NotifyUnicastIpAddressChange,@216")
#pragma comment(linker, "/EXPORT:ParseNetworkString=FkDrcom.ParseNetworkString,@217")
#pragma comment(linker, "/EXPORT:ResolveIpNetEntry2=FkDrcom.ResolveIpNetEntry2,@234")
#pragma comment(linker, "/EXPORT:ResolveNeighbor=FkDrcom.ResolveNeighbor,@235")
#pragma comment(linker, "/EXPORT:RestoreMediaSense=FkDrcom.RestoreMediaSense,@236")
#pragma comment(linker, "/EXPORT:SendARP=FkDrcom.SendARP,@237")
#pragma comment(linker, "/EXPORT:SetAdapterIpAddress=FkDrcom.SetAdapterIpAddress,@238")
#pragma comment(linker, "/EXPORT:SetCurrentThreadCompartmentId=FkDrcom.SetCurrentThreadCompartmentId,@239")
#pragma comment(linker, "/EXPORT:SetIfEntry=FkDrcom.SetIfEntry,@240")
#pragma comment(linker, "/EXPORT:SetIpForwardEntry2=FkDrcom.SetIpForwardEntry2,@241")
#pragma comment(linker, "/EXPORT:SetIpForwardEntry=FkDrcom.SetIpForwardEntry,@242")
#pragma comment(linker, "/EXPORT:SetIpInterfaceEntry=FkDrcom.SetIpInterfaceEntry,@243")
#pragma comment(linker, "/EXPORT:SetIpNetEntry2=FkDrcom.SetIpNetEntry2,@244")
#pragma comment(linker, "/EXPORT:SetIpNetEntry=FkDrcom.SetIpNetEntry,@245")
#pragma comment(linker, "/EXPORT:SetIpStatistics=FkDrcom.SetIpStatistics,@246")
#pragma comment(linker, "/EXPORT:SetIpStatisticsEx=FkDrcom.SetIpStatisticsEx,@247")
#pragma comment(linker, "/EXPORT:SetIpTTL=FkDrcom.SetIpTTL,@248")
#pragma comment(linker, "/EXPORT:SetNetworkInformation=FkDrcom.SetNetworkInformation,@249")
#pragma comment(linker, "/EXPORT:SetPerTcp6ConnectionEStats=FkDrcom.SetPerTcp6ConnectionEStats,@250")
#pragma comment(linker, "/EXPORT:SetPerTcp6ConnectionStats=FkDrcom.SetPerTcp6ConnectionStats,@251")
#pragma comment(linker, "/EXPORT:SetPerTcpConnectionEStats=FkDrcom.SetPerTcpConnectionEStats,@252")
#pragma comment(linker, "/EXPORT:SetPerTcpConnectionStats=FkDrcom.SetPerTcpConnectionStats,@253")
#pragma comment(linker, "/EXPORT:SetSessionCompartmentId=FkDrcom.SetSessionCompartmentId,@254")
#pragma comment(linker, "/EXPORT:SetTcpEntry=FkDrcom.SetTcpEntry,@255")
#pragma comment(linker, "/EXPORT:SetUnicastIpAddressEntry=FkDrcom.SetUnicastIpAddressEntry,@256")
#pragma comment(linker, "/EXPORT:UnenableRouter=FkDrcom.UnenableRouter,@257")
#pragma comment(linker, "/EXPORT:do_echo_rep=FkDrcom.do_echo_rep,@258")
#pragma comment(linker, "/EXPORT:do_echo_req=FkDrcom.do_echo_req,@259")
#pragma comment(linker, "/EXPORT:if_indextoname=FkDrcom.if_indextoname,@260")
#pragma comment(linker, "/EXPORT:if_nametoindex=FkDrcom.if_nametoindex,@261")
#pragma comment(linker, "/EXPORT:register_icmp=FkDrcom.register_icmp,@262")
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
