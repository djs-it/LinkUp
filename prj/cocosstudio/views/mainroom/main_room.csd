<GameFile>
  <PropertyGroup Name="main_room" Type="Layer" ID="419e2078-fc71-43ea-80a7-73d72dc1e0ef" Version="3.10.0.0" />
  <Content ctype="GameProjectContent">
    <Content>
      <Animation Duration="0" Speed="1.0000" />
      <ObjectData Name="Layer" Tag="54" ctype="GameLayerObjectData">
        <Size X="960.0000" Y="1440.0000" />
        <Children>
          <AbstractNodeData Name="Panel_1" ActionTag="-342918721" Tag="68" IconVisible="False" PositionPercentXEnabled="True" PositionPercentYEnabled="True" LeftMargin="-60.0000" RightMargin="-60.0000" TopMargin="-133.5000" BottomMargin="-133.5000" TouchEnable="True" ClipAble="False" BackColorAlpha="0" ComboBoxIndex="1" ColorAngle="90.0000" Scale9Width="1" Scale9Height="1" ctype="PanelObjectData">
            <Size X="1080.0000" Y="1707.0000" />
            <Children>
              <AbstractNodeData Name="Sprite_1" ActionTag="540533440" Tag="69" IconVisible="False" PositionPercentXEnabled="True" PositionPercentYEnabled="True" ctype="SpriteObjectData">
                <Size X="1080.0000" Y="1707.0000" />
                <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
                <Position X="540.0000" Y="853.5000" />
                <Scale ScaleX="1.0000" ScaleY="1.0000" />
                <CColor A="255" R="255" G="255" B="255" />
                <PrePosition X="0.5000" Y="0.5000" />
                <PreSize X="1.0000" Y="1.0000" />
                <FileData Type="PlistSubImage" Path="room-background.png" Plist="Resource/atlas/B-room.plist" />
                <BlendFunc Src="1" Dst="771" />
              </AbstractNodeData>
              <AbstractNodeData Name="Panel_2" ActionTag="-1771372979" Tag="70" IconVisible="False" PositionPercentXEnabled="True" PositionPercentYEnabled="True" TouchEnable="True" ClipAble="False" BackColorAlpha="0" ComboBoxIndex="1" ColorAngle="90.0000" Scale9Width="1" Scale9Height="1" ctype="PanelObjectData">
                <Size X="1080.0000" Y="1707.0000" />
                <Children>
                  <AbstractNodeData Name="btnWindow" ActionTag="436183539" CallBackType="Click" CallBackName="btnWindow" UserData="sb" Tag="71" IconVisible="False" LeftMargin="14.3294" RightMargin="561.6706" TopMargin="217.0371" BottomMargin="1011.9629" TouchEnable="True" FontSize="14" Scale9Enable="True" LeftEage="15" RightEage="15" TopEage="11" BottomEage="11" Scale9OriginX="15" Scale9OriginY="11" Scale9Width="474" Scale9Height="456" ShadowOffsetX="2.0000" ShadowOffsetY="-2.0000" ctype="ButtonObjectData">
                    <Size X="504.0000" Y="478.0000" />
                    <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
                    <Position X="266.3294" Y="1250.9629" />
                    <Scale ScaleX="1.0000" ScaleY="1.0000" />
                    <CColor A="255" R="255" G="255" B="255" />
                    <PrePosition X="0.2466" Y="0.7328" />
                    <PreSize X="0.4667" Y="0.2800" />
                    <TextColor A="255" R="65" G="65" B="70" />
                    <DisabledFileData Type="Default" Path="Default/Button_Disable.png" Plist="" />
                    <PressedFileData Type="PlistSubImage" Path="room-windows.png" Plist="Resource/atlas/B-room.plist" />
                    <NormalFileData Type="PlistSubImage" Path="room-windows.png" Plist="Resource/atlas/B-room.plist" />
                    <OutlineColor A="255" R="255" G="0" B="0" />
                    <ShadowColor A="255" R="110" G="110" B="110" />
                  </AbstractNodeData>
                  <AbstractNodeData Name="btnHang" ActionTag="1465071435" CallBackType="Click" CallBackName="btnHang" UserData="sb" Tag="72" IconVisible="False" LeftMargin="595.5818" RightMargin="253.4182" TopMargin="333.1611" BottomMargin="1146.8389" TouchEnable="True" FontSize="14" Scale9Enable="True" LeftEage="15" RightEage="15" TopEage="11" BottomEage="11" Scale9OriginX="15" Scale9OriginY="11" Scale9Width="201" Scale9Height="205" ShadowOffsetX="2.0000" ShadowOffsetY="-2.0000" ctype="ButtonObjectData">
                    <Size X="231.0000" Y="227.0000" />
                    <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
                    <Position X="711.0818" Y="1260.3389" />
                    <Scale ScaleX="1.0000" ScaleY="1.0000" />
                    <CColor A="255" R="255" G="255" B="255" />
                    <PrePosition X="0.6584" Y="0.7383" />
                    <PreSize X="0.2139" Y="0.1330" />
                    <TextColor A="255" R="65" G="65" B="70" />
                    <DisabledFileData Type="Default" Path="Default/Button_Disable.png" Plist="" />
                    <PressedFileData Type="PlistSubImage" Path="room-hang.png" Plist="Resource/atlas/B-room.plist" />
                    <NormalFileData Type="PlistSubImage" Path="room-hang.png" Plist="Resource/atlas/B-room.plist" />
                    <OutlineColor A="255" R="255" G="0" B="0" />
                    <ShadowColor A="255" R="110" G="110" B="110" />
                  </AbstractNodeData>
                  <AbstractNodeData Name="btnFunc" ActionTag="-831005085" CallBackType="Click" CallBackName="btnFunc" UserData="sb" Tag="73" IconVisible="False" LeftMargin="109.9939" RightMargin="754.0061" TopMargin="671.8417" BottomMargin="715.1583" TouchEnable="True" FontSize="14" Scale9Enable="True" LeftEage="15" RightEage="15" TopEage="11" BottomEage="11" Scale9OriginX="15" Scale9OriginY="11" Scale9Width="186" Scale9Height="298" ShadowOffsetX="2.0000" ShadowOffsetY="-2.0000" ctype="ButtonObjectData">
                    <Size X="216.0000" Y="320.0000" />
                    <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
                    <Position X="217.9939" Y="875.1583" />
                    <Scale ScaleX="1.0000" ScaleY="1.0000" />
                    <CColor A="255" R="255" G="255" B="255" />
                    <PrePosition X="0.2018" Y="0.5127" />
                    <PreSize X="0.2000" Y="0.1875" />
                    <TextColor A="255" R="65" G="65" B="70" />
                    <DisabledFileData Type="Default" Path="Default/Button_Disable.png" Plist="" />
                    <PressedFileData Type="PlistSubImage" Path="room-func.png" Plist="Resource/atlas/B-room.plist" />
                    <NormalFileData Type="PlistSubImage" Path="room-func.png" Plist="Resource/atlas/B-room.plist" />
                    <OutlineColor A="255" R="255" G="0" B="0" />
                    <ShadowColor A="255" R="110" G="110" B="110" />
                  </AbstractNodeData>
                  <AbstractNodeData Name="btnDressing" ActionTag="-567312749" CallBackType="Click" CallBackName="btnDressing" UserData="sb" Tag="74" IconVisible="False" LeftMargin="435.3569" RightMargin="62.6431" TopMargin="555.2271" BottomMargin="622.7729" TouchEnable="True" FontSize="14" Scale9Enable="True" LeftEage="15" RightEage="15" TopEage="11" BottomEage="11" Scale9OriginX="15" Scale9OriginY="11" Scale9Width="552" Scale9Height="507" ShadowOffsetX="2.0000" ShadowOffsetY="-2.0000" ctype="ButtonObjectData">
                    <Size X="582.0000" Y="529.0000" />
                    <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
                    <Position X="726.3569" Y="887.2729" />
                    <Scale ScaleX="1.0000" ScaleY="1.0000" />
                    <CColor A="255" R="255" G="255" B="255" />
                    <PrePosition X="0.6726" Y="0.5198" />
                    <PreSize X="0.5389" Y="0.3099" />
                    <TextColor A="255" R="65" G="65" B="70" />
                    <DisabledFileData Type="Default" Path="Default/Button_Disable.png" Plist="" />
                    <PressedFileData Type="PlistSubImage" Path="room-dressing.png" Plist="Resource/atlas/B-room.plist" />
                    <NormalFileData Type="PlistSubImage" Path="room-dressing.png" Plist="Resource/atlas/B-room.plist" />
                    <OutlineColor A="255" R="255" G="0" B="0" />
                    <ShadowColor A="255" R="110" G="110" B="110" />
                  </AbstractNodeData>
                  <AbstractNodeData Name="btnDesk" ActionTag="62254924" CallBackType="Click" CallBackName="btnDesk" UserData="sb" Tag="75" IconVisible="False" LeftMargin="13.5776" RightMargin="525.4224" TopMargin="1042.9863" BottomMargin="181.0136" TouchEnable="True" FontSize="14" Scale9Enable="True" LeftEage="15" RightEage="15" TopEage="11" BottomEage="11" Scale9OriginX="15" Scale9OriginY="11" Scale9Width="511" Scale9Height="461" ShadowOffsetX="2.0000" ShadowOffsetY="-2.0000" ctype="ButtonObjectData">
                    <Size X="541.0000" Y="483.0000" />
                    <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
                    <Position X="284.0776" Y="422.5136" />
                    <Scale ScaleX="1.0000" ScaleY="1.0000" />
                    <CColor A="255" R="255" G="255" B="255" />
                    <PrePosition X="0.2630" Y="0.2475" />
                    <PreSize X="0.5009" Y="0.2830" />
                    <TextColor A="255" R="65" G="65" B="70" />
                    <DisabledFileData Type="Default" Path="Default/Button_Disable.png" Plist="" />
                    <PressedFileData Type="PlistSubImage" Path="room-desk.png" Plist="Resource/atlas/B-room.plist" />
                    <NormalFileData Type="PlistSubImage" Path="room-desk.png" Plist="Resource/atlas/B-room.plist" />
                    <OutlineColor A="255" R="255" G="0" B="0" />
                    <ShadowColor A="255" R="110" G="110" B="110" />
                  </AbstractNodeData>
                  <AbstractNodeData Name="btnRole" ActionTag="48792058" CallBackType="Click" CallBackName="btnRole" UserData="sb" Tag="76" IconVisible="False" LeftMargin="519.5461" RightMargin="253.4539" TopMargin="1036.3223" BottomMargin="323.6777" TouchEnable="True" FontSize="14" Scale9Enable="True" LeftEage="15" RightEage="15" TopEage="11" BottomEage="11" Scale9OriginX="15" Scale9OriginY="11" Scale9Width="277" Scale9Height="325" ShadowOffsetX="2.0000" ShadowOffsetY="-2.0000" ctype="ButtonObjectData">
                    <Size X="307.0000" Y="347.0000" />
                    <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
                    <Position X="673.0461" Y="497.1777" />
                    <Scale ScaleX="1.0000" ScaleY="1.0000" />
                    <CColor A="255" R="255" G="255" B="255" />
                    <PrePosition X="0.6232" Y="0.2913" />
                    <PreSize X="0.2843" Y="0.2033" />
                    <TextColor A="255" R="65" G="65" B="70" />
                    <DisabledFileData Type="Default" Path="Default/Button_Disable.png" Plist="" />
                    <PressedFileData Type="PlistSubImage" Path="room-role.png" Plist="Resource/atlas/B-room.plist" />
                    <NormalFileData Type="PlistSubImage" Path="room-role.png" Plist="Resource/atlas/B-room.plist" />
                    <OutlineColor A="255" R="255" G="0" B="0" />
                    <ShadowColor A="255" R="110" G="110" B="110" />
                  </AbstractNodeData>
                  <AbstractNodeData Name="btnChair" ActionTag="45921269" CallBackType="Click" CallBackName="btnChair" UserData="sb" Tag="77" IconVisible="False" LeftMargin="748.7108" RightMargin="13.2892" TopMargin="1182.6260" BottomMargin="198.3740" TouchEnable="True" FontSize="14" Scale9Enable="True" LeftEage="15" RightEage="15" TopEage="11" BottomEage="11" Scale9OriginX="15" Scale9OriginY="11" Scale9Width="288" Scale9Height="304" ShadowOffsetX="2.0000" ShadowOffsetY="-2.0000" ctype="ButtonObjectData">
                    <Size X="318.0000" Y="326.0000" />
                    <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
                    <Position X="907.7108" Y="361.3740" />
                    <Scale ScaleX="1.0000" ScaleY="1.0000" />
                    <CColor A="255" R="255" G="255" B="255" />
                    <PrePosition X="0.8405" Y="0.2117" />
                    <PreSize X="0.2944" Y="0.1910" />
                    <TextColor A="255" R="65" G="65" B="70" />
                    <DisabledFileData Type="Default" Path="Default/Button_Disable.png" Plist="" />
                    <PressedFileData Type="PlistSubImage" Path="room-chair.png" Plist="Resource/atlas/B-room.plist" />
                    <NormalFileData Type="PlistSubImage" Path="room-chair.png" Plist="Resource/atlas/B-room.plist" />
                    <OutlineColor A="255" R="255" G="0" B="0" />
                    <ShadowColor A="255" R="110" G="110" B="110" />
                  </AbstractNodeData>
                </Children>
                <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
                <Position X="540.0000" Y="853.5000" />
                <Scale ScaleX="1.0000" ScaleY="1.0000" />
                <CColor A="255" R="255" G="255" B="255" />
                <PrePosition X="0.5000" Y="0.5000" />
                <PreSize X="1.0000" Y="1.0000" />
                <SingleColor A="255" R="150" G="200" B="255" />
                <FirstColor A="255" R="150" G="200" B="255" />
                <EndColor A="255" R="255" G="255" B="255" />
                <ColorVector ScaleY="1.0000" />
              </AbstractNodeData>
            </Children>
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="480.0000" Y="720.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="0.5000" Y="0.5000" />
            <PreSize X="1.1250" Y="1.1854" />
            <SingleColor A="255" R="150" G="200" B="255" />
            <FirstColor A="255" R="150" G="200" B="255" />
            <EndColor A="255" R="255" G="255" B="255" />
            <ColorVector ScaleY="1.0000" />
          </AbstractNodeData>
        </Children>
      </ObjectData>
    </Content>
  </Content>
</GameFile>