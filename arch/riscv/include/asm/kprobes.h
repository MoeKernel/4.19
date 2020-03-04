/*
<<<<<<< HEAD:arch/riscv/include/asm/kprobes.h
 * Copied from arch/arm64/include/asm/kprobes.h
 *
 * Copyright (C) 2013 Linaro Limited
 * Copyright (C) 2017 SiFive
=======
 * Copyright (c) 2018-2019, The Linux Foundation. All rights reserved.
>>>>>>> 185723c17bc2 (arm/arm64: Import DTs and defconfigs for SM6125 (TRINKET)):arch/arm64/boot/dts/qcom/sm6150-interposer-trinket.dtsi
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 */

#include "sm6150.dtsi"
#include <dt-bindings/clock/qcom,rpmcc.h>

#include <asm-generic/kprobes.h>

&soc {
	clock_rpmcc: qcom,rpmcc {
	};

	qcom,icnss@18800000 {
		/delete-property/ vdd-cx-mx-supply;
		/delete-property/ vdd-1.8-xo-supply;
		/delete-property/ vdd-1.3-rfa-supply;
		/delete-property/ vdd-3.3-ch0-supply;
	};
};

#include "sm6150-pm6125-interposer-trinket.dtsi"

&qusb_phy0 {
	vdd-supply = <&L7A>;
	vdda18-supply = <&L10A>;
	vdda33-supply = <&L15A>;
};

&usb_qmp_phy {
	vdd-supply = <&L7A>;
	core-supply = <&L10A>;
};

&usb0 {
	extcon = <&pmi632_charger>;
};

&qupv3_se0_2uart {
	status = "ok";
};
