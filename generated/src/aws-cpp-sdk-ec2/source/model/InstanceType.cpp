﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace InstanceTypeMapper
      {

        static const int a1_medium_HASH = HashingUtils::HashString("a1.medium");
        static const int a1_large_HASH = HashingUtils::HashString("a1.large");
        static const int a1_xlarge_HASH = HashingUtils::HashString("a1.xlarge");
        static const int a1_2xlarge_HASH = HashingUtils::HashString("a1.2xlarge");
        static const int a1_4xlarge_HASH = HashingUtils::HashString("a1.4xlarge");
        static const int a1_metal_HASH = HashingUtils::HashString("a1.metal");
        static const int c1_medium_HASH = HashingUtils::HashString("c1.medium");
        static const int c1_xlarge_HASH = HashingUtils::HashString("c1.xlarge");
        static const int c3_large_HASH = HashingUtils::HashString("c3.large");
        static const int c3_xlarge_HASH = HashingUtils::HashString("c3.xlarge");
        static const int c3_2xlarge_HASH = HashingUtils::HashString("c3.2xlarge");
        static const int c3_4xlarge_HASH = HashingUtils::HashString("c3.4xlarge");
        static const int c3_8xlarge_HASH = HashingUtils::HashString("c3.8xlarge");
        static const int c4_large_HASH = HashingUtils::HashString("c4.large");
        static const int c4_xlarge_HASH = HashingUtils::HashString("c4.xlarge");
        static const int c4_2xlarge_HASH = HashingUtils::HashString("c4.2xlarge");
        static const int c4_4xlarge_HASH = HashingUtils::HashString("c4.4xlarge");
        static const int c4_8xlarge_HASH = HashingUtils::HashString("c4.8xlarge");
        static const int c5_large_HASH = HashingUtils::HashString("c5.large");
        static const int c5_xlarge_HASH = HashingUtils::HashString("c5.xlarge");
        static const int c5_2xlarge_HASH = HashingUtils::HashString("c5.2xlarge");
        static const int c5_4xlarge_HASH = HashingUtils::HashString("c5.4xlarge");
        static const int c5_9xlarge_HASH = HashingUtils::HashString("c5.9xlarge");
        static const int c5_12xlarge_HASH = HashingUtils::HashString("c5.12xlarge");
        static const int c5_18xlarge_HASH = HashingUtils::HashString("c5.18xlarge");
        static const int c5_24xlarge_HASH = HashingUtils::HashString("c5.24xlarge");
        static const int c5_metal_HASH = HashingUtils::HashString("c5.metal");
        static const int c5a_large_HASH = HashingUtils::HashString("c5a.large");
        static const int c5a_xlarge_HASH = HashingUtils::HashString("c5a.xlarge");
        static const int c5a_2xlarge_HASH = HashingUtils::HashString("c5a.2xlarge");
        static const int c5a_4xlarge_HASH = HashingUtils::HashString("c5a.4xlarge");
        static const int c5a_8xlarge_HASH = HashingUtils::HashString("c5a.8xlarge");
        static const int c5a_12xlarge_HASH = HashingUtils::HashString("c5a.12xlarge");
        static const int c5a_16xlarge_HASH = HashingUtils::HashString("c5a.16xlarge");
        static const int c5a_24xlarge_HASH = HashingUtils::HashString("c5a.24xlarge");
        static const int c5ad_large_HASH = HashingUtils::HashString("c5ad.large");
        static const int c5ad_xlarge_HASH = HashingUtils::HashString("c5ad.xlarge");
        static const int c5ad_2xlarge_HASH = HashingUtils::HashString("c5ad.2xlarge");
        static const int c5ad_4xlarge_HASH = HashingUtils::HashString("c5ad.4xlarge");
        static const int c5ad_8xlarge_HASH = HashingUtils::HashString("c5ad.8xlarge");
        static const int c5ad_12xlarge_HASH = HashingUtils::HashString("c5ad.12xlarge");
        static const int c5ad_16xlarge_HASH = HashingUtils::HashString("c5ad.16xlarge");
        static const int c5ad_24xlarge_HASH = HashingUtils::HashString("c5ad.24xlarge");
        static const int c5d_large_HASH = HashingUtils::HashString("c5d.large");
        static const int c5d_xlarge_HASH = HashingUtils::HashString("c5d.xlarge");
        static const int c5d_2xlarge_HASH = HashingUtils::HashString("c5d.2xlarge");
        static const int c5d_4xlarge_HASH = HashingUtils::HashString("c5d.4xlarge");
        static const int c5d_9xlarge_HASH = HashingUtils::HashString("c5d.9xlarge");
        static const int c5d_12xlarge_HASH = HashingUtils::HashString("c5d.12xlarge");
        static const int c5d_18xlarge_HASH = HashingUtils::HashString("c5d.18xlarge");
        static const int c5d_24xlarge_HASH = HashingUtils::HashString("c5d.24xlarge");
        static const int c5d_metal_HASH = HashingUtils::HashString("c5d.metal");
        static const int c5n_large_HASH = HashingUtils::HashString("c5n.large");
        static const int c5n_xlarge_HASH = HashingUtils::HashString("c5n.xlarge");
        static const int c5n_2xlarge_HASH = HashingUtils::HashString("c5n.2xlarge");
        static const int c5n_4xlarge_HASH = HashingUtils::HashString("c5n.4xlarge");
        static const int c5n_9xlarge_HASH = HashingUtils::HashString("c5n.9xlarge");
        static const int c5n_18xlarge_HASH = HashingUtils::HashString("c5n.18xlarge");
        static const int c5n_metal_HASH = HashingUtils::HashString("c5n.metal");
        static const int c6g_medium_HASH = HashingUtils::HashString("c6g.medium");
        static const int c6g_large_HASH = HashingUtils::HashString("c6g.large");
        static const int c6g_xlarge_HASH = HashingUtils::HashString("c6g.xlarge");
        static const int c6g_2xlarge_HASH = HashingUtils::HashString("c6g.2xlarge");
        static const int c6g_4xlarge_HASH = HashingUtils::HashString("c6g.4xlarge");
        static const int c6g_8xlarge_HASH = HashingUtils::HashString("c6g.8xlarge");
        static const int c6g_12xlarge_HASH = HashingUtils::HashString("c6g.12xlarge");
        static const int c6g_16xlarge_HASH = HashingUtils::HashString("c6g.16xlarge");
        static const int c6g_metal_HASH = HashingUtils::HashString("c6g.metal");
        static const int c6gd_medium_HASH = HashingUtils::HashString("c6gd.medium");
        static const int c6gd_large_HASH = HashingUtils::HashString("c6gd.large");
        static const int c6gd_xlarge_HASH = HashingUtils::HashString("c6gd.xlarge");
        static const int c6gd_2xlarge_HASH = HashingUtils::HashString("c6gd.2xlarge");
        static const int c6gd_4xlarge_HASH = HashingUtils::HashString("c6gd.4xlarge");
        static const int c6gd_8xlarge_HASH = HashingUtils::HashString("c6gd.8xlarge");
        static const int c6gd_12xlarge_HASH = HashingUtils::HashString("c6gd.12xlarge");
        static const int c6gd_16xlarge_HASH = HashingUtils::HashString("c6gd.16xlarge");
        static const int c6gd_metal_HASH = HashingUtils::HashString("c6gd.metal");
        static const int c6gn_medium_HASH = HashingUtils::HashString("c6gn.medium");
        static const int c6gn_large_HASH = HashingUtils::HashString("c6gn.large");
        static const int c6gn_xlarge_HASH = HashingUtils::HashString("c6gn.xlarge");
        static const int c6gn_2xlarge_HASH = HashingUtils::HashString("c6gn.2xlarge");
        static const int c6gn_4xlarge_HASH = HashingUtils::HashString("c6gn.4xlarge");
        static const int c6gn_8xlarge_HASH = HashingUtils::HashString("c6gn.8xlarge");
        static const int c6gn_12xlarge_HASH = HashingUtils::HashString("c6gn.12xlarge");
        static const int c6gn_16xlarge_HASH = HashingUtils::HashString("c6gn.16xlarge");
        static const int c6i_large_HASH = HashingUtils::HashString("c6i.large");
        static const int c6i_xlarge_HASH = HashingUtils::HashString("c6i.xlarge");
        static const int c6i_2xlarge_HASH = HashingUtils::HashString("c6i.2xlarge");
        static const int c6i_4xlarge_HASH = HashingUtils::HashString("c6i.4xlarge");
        static const int c6i_8xlarge_HASH = HashingUtils::HashString("c6i.8xlarge");
        static const int c6i_12xlarge_HASH = HashingUtils::HashString("c6i.12xlarge");
        static const int c6i_16xlarge_HASH = HashingUtils::HashString("c6i.16xlarge");
        static const int c6i_24xlarge_HASH = HashingUtils::HashString("c6i.24xlarge");
        static const int c6i_32xlarge_HASH = HashingUtils::HashString("c6i.32xlarge");
        static const int c6i_metal_HASH = HashingUtils::HashString("c6i.metal");
        static const int cc1_4xlarge_HASH = HashingUtils::HashString("cc1.4xlarge");
        static const int cc2_8xlarge_HASH = HashingUtils::HashString("cc2.8xlarge");
        static const int cg1_4xlarge_HASH = HashingUtils::HashString("cg1.4xlarge");
        static const int cr1_8xlarge_HASH = HashingUtils::HashString("cr1.8xlarge");
        static const int d2_xlarge_HASH = HashingUtils::HashString("d2.xlarge");
        static const int d2_2xlarge_HASH = HashingUtils::HashString("d2.2xlarge");
        static const int d2_4xlarge_HASH = HashingUtils::HashString("d2.4xlarge");
        static const int d2_8xlarge_HASH = HashingUtils::HashString("d2.8xlarge");
        static const int d3_xlarge_HASH = HashingUtils::HashString("d3.xlarge");
        static const int d3_2xlarge_HASH = HashingUtils::HashString("d3.2xlarge");
        static const int d3_4xlarge_HASH = HashingUtils::HashString("d3.4xlarge");
        static const int d3_8xlarge_HASH = HashingUtils::HashString("d3.8xlarge");
        static const int d3en_xlarge_HASH = HashingUtils::HashString("d3en.xlarge");
        static const int d3en_2xlarge_HASH = HashingUtils::HashString("d3en.2xlarge");
        static const int d3en_4xlarge_HASH = HashingUtils::HashString("d3en.4xlarge");
        static const int d3en_6xlarge_HASH = HashingUtils::HashString("d3en.6xlarge");
        static const int d3en_8xlarge_HASH = HashingUtils::HashString("d3en.8xlarge");
        static const int d3en_12xlarge_HASH = HashingUtils::HashString("d3en.12xlarge");
        static const int dl1_24xlarge_HASH = HashingUtils::HashString("dl1.24xlarge");
        static const int f1_2xlarge_HASH = HashingUtils::HashString("f1.2xlarge");
        static const int f1_4xlarge_HASH = HashingUtils::HashString("f1.4xlarge");
        static const int f1_16xlarge_HASH = HashingUtils::HashString("f1.16xlarge");
        static const int g2_2xlarge_HASH = HashingUtils::HashString("g2.2xlarge");
        static const int g2_8xlarge_HASH = HashingUtils::HashString("g2.8xlarge");
        static const int g3_4xlarge_HASH = HashingUtils::HashString("g3.4xlarge");
        static const int g3_8xlarge_HASH = HashingUtils::HashString("g3.8xlarge");
        static const int g3_16xlarge_HASH = HashingUtils::HashString("g3.16xlarge");
        static const int g3s_xlarge_HASH = HashingUtils::HashString("g3s.xlarge");
        static const int g4ad_xlarge_HASH = HashingUtils::HashString("g4ad.xlarge");
        static const int g4ad_2xlarge_HASH = HashingUtils::HashString("g4ad.2xlarge");
        static const int g4ad_4xlarge_HASH = HashingUtils::HashString("g4ad.4xlarge");
        static const int g4ad_8xlarge_HASH = HashingUtils::HashString("g4ad.8xlarge");
        static const int g4ad_16xlarge_HASH = HashingUtils::HashString("g4ad.16xlarge");
        static const int g4dn_xlarge_HASH = HashingUtils::HashString("g4dn.xlarge");
        static const int g4dn_2xlarge_HASH = HashingUtils::HashString("g4dn.2xlarge");
        static const int g4dn_4xlarge_HASH = HashingUtils::HashString("g4dn.4xlarge");
        static const int g4dn_8xlarge_HASH = HashingUtils::HashString("g4dn.8xlarge");
        static const int g4dn_12xlarge_HASH = HashingUtils::HashString("g4dn.12xlarge");
        static const int g4dn_16xlarge_HASH = HashingUtils::HashString("g4dn.16xlarge");
        static const int g4dn_metal_HASH = HashingUtils::HashString("g4dn.metal");
        static const int g5_xlarge_HASH = HashingUtils::HashString("g5.xlarge");
        static const int g5_2xlarge_HASH = HashingUtils::HashString("g5.2xlarge");
        static const int g5_4xlarge_HASH = HashingUtils::HashString("g5.4xlarge");
        static const int g5_8xlarge_HASH = HashingUtils::HashString("g5.8xlarge");
        static const int g5_12xlarge_HASH = HashingUtils::HashString("g5.12xlarge");
        static const int g5_16xlarge_HASH = HashingUtils::HashString("g5.16xlarge");
        static const int g5_24xlarge_HASH = HashingUtils::HashString("g5.24xlarge");
        static const int g5_48xlarge_HASH = HashingUtils::HashString("g5.48xlarge");
        static const int g5g_xlarge_HASH = HashingUtils::HashString("g5g.xlarge");
        static const int g5g_2xlarge_HASH = HashingUtils::HashString("g5g.2xlarge");
        static const int g5g_4xlarge_HASH = HashingUtils::HashString("g5g.4xlarge");
        static const int g5g_8xlarge_HASH = HashingUtils::HashString("g5g.8xlarge");
        static const int g5g_16xlarge_HASH = HashingUtils::HashString("g5g.16xlarge");
        static const int g5g_metal_HASH = HashingUtils::HashString("g5g.metal");
        static const int hi1_4xlarge_HASH = HashingUtils::HashString("hi1.4xlarge");
        static const int hpc6a_48xlarge_HASH = HashingUtils::HashString("hpc6a.48xlarge");
        static const int hs1_8xlarge_HASH = HashingUtils::HashString("hs1.8xlarge");
        static const int h1_2xlarge_HASH = HashingUtils::HashString("h1.2xlarge");
        static const int h1_4xlarge_HASH = HashingUtils::HashString("h1.4xlarge");
        static const int h1_8xlarge_HASH = HashingUtils::HashString("h1.8xlarge");
        static const int h1_16xlarge_HASH = HashingUtils::HashString("h1.16xlarge");
        static const int i2_xlarge_HASH = HashingUtils::HashString("i2.xlarge");
        static const int i2_2xlarge_HASH = HashingUtils::HashString("i2.2xlarge");
        static const int i2_4xlarge_HASH = HashingUtils::HashString("i2.4xlarge");
        static const int i2_8xlarge_HASH = HashingUtils::HashString("i2.8xlarge");
        static const int i3_large_HASH = HashingUtils::HashString("i3.large");
        static const int i3_xlarge_HASH = HashingUtils::HashString("i3.xlarge");
        static const int i3_2xlarge_HASH = HashingUtils::HashString("i3.2xlarge");
        static const int i3_4xlarge_HASH = HashingUtils::HashString("i3.4xlarge");
        static const int i3_8xlarge_HASH = HashingUtils::HashString("i3.8xlarge");
        static const int i3_16xlarge_HASH = HashingUtils::HashString("i3.16xlarge");
        static const int i3_metal_HASH = HashingUtils::HashString("i3.metal");
        static const int i3en_large_HASH = HashingUtils::HashString("i3en.large");
        static const int i3en_xlarge_HASH = HashingUtils::HashString("i3en.xlarge");
        static const int i3en_2xlarge_HASH = HashingUtils::HashString("i3en.2xlarge");
        static const int i3en_3xlarge_HASH = HashingUtils::HashString("i3en.3xlarge");
        static const int i3en_6xlarge_HASH = HashingUtils::HashString("i3en.6xlarge");
        static const int i3en_12xlarge_HASH = HashingUtils::HashString("i3en.12xlarge");
        static const int i3en_24xlarge_HASH = HashingUtils::HashString("i3en.24xlarge");
        static const int i3en_metal_HASH = HashingUtils::HashString("i3en.metal");
        static const int im4gn_large_HASH = HashingUtils::HashString("im4gn.large");
        static const int im4gn_xlarge_HASH = HashingUtils::HashString("im4gn.xlarge");
        static const int im4gn_2xlarge_HASH = HashingUtils::HashString("im4gn.2xlarge");
        static const int im4gn_4xlarge_HASH = HashingUtils::HashString("im4gn.4xlarge");
        static const int im4gn_8xlarge_HASH = HashingUtils::HashString("im4gn.8xlarge");
        static const int im4gn_16xlarge_HASH = HashingUtils::HashString("im4gn.16xlarge");
        static const int inf1_xlarge_HASH = HashingUtils::HashString("inf1.xlarge");
        static const int inf1_2xlarge_HASH = HashingUtils::HashString("inf1.2xlarge");
        static const int inf1_6xlarge_HASH = HashingUtils::HashString("inf1.6xlarge");
        static const int inf1_24xlarge_HASH = HashingUtils::HashString("inf1.24xlarge");
        static const int is4gen_medium_HASH = HashingUtils::HashString("is4gen.medium");
        static const int is4gen_large_HASH = HashingUtils::HashString("is4gen.large");
        static const int is4gen_xlarge_HASH = HashingUtils::HashString("is4gen.xlarge");
        static const int is4gen_2xlarge_HASH = HashingUtils::HashString("is4gen.2xlarge");
        static const int is4gen_4xlarge_HASH = HashingUtils::HashString("is4gen.4xlarge");
        static const int is4gen_8xlarge_HASH = HashingUtils::HashString("is4gen.8xlarge");
        static const int m1_small_HASH = HashingUtils::HashString("m1.small");
        static const int m1_medium_HASH = HashingUtils::HashString("m1.medium");
        static const int m1_large_HASH = HashingUtils::HashString("m1.large");
        static const int m1_xlarge_HASH = HashingUtils::HashString("m1.xlarge");
        static const int m2_xlarge_HASH = HashingUtils::HashString("m2.xlarge");
        static const int m2_2xlarge_HASH = HashingUtils::HashString("m2.2xlarge");
        static const int m2_4xlarge_HASH = HashingUtils::HashString("m2.4xlarge");
        static const int m3_medium_HASH = HashingUtils::HashString("m3.medium");
        static const int m3_large_HASH = HashingUtils::HashString("m3.large");
        static const int m3_xlarge_HASH = HashingUtils::HashString("m3.xlarge");
        static const int m3_2xlarge_HASH = HashingUtils::HashString("m3.2xlarge");
        static const int m4_large_HASH = HashingUtils::HashString("m4.large");
        static const int m4_xlarge_HASH = HashingUtils::HashString("m4.xlarge");
        static const int m4_2xlarge_HASH = HashingUtils::HashString("m4.2xlarge");
        static const int m4_4xlarge_HASH = HashingUtils::HashString("m4.4xlarge");
        static const int m4_10xlarge_HASH = HashingUtils::HashString("m4.10xlarge");
        static const int m4_16xlarge_HASH = HashingUtils::HashString("m4.16xlarge");
        static const int m5_large_HASH = HashingUtils::HashString("m5.large");
        static const int m5_xlarge_HASH = HashingUtils::HashString("m5.xlarge");
        static const int m5_2xlarge_HASH = HashingUtils::HashString("m5.2xlarge");
        static const int m5_4xlarge_HASH = HashingUtils::HashString("m5.4xlarge");
        static const int m5_8xlarge_HASH = HashingUtils::HashString("m5.8xlarge");
        static const int m5_12xlarge_HASH = HashingUtils::HashString("m5.12xlarge");
        static const int m5_16xlarge_HASH = HashingUtils::HashString("m5.16xlarge");
        static const int m5_24xlarge_HASH = HashingUtils::HashString("m5.24xlarge");
        static const int m5_metal_HASH = HashingUtils::HashString("m5.metal");
        static const int m5a_large_HASH = HashingUtils::HashString("m5a.large");
        static const int m5a_xlarge_HASH = HashingUtils::HashString("m5a.xlarge");
        static const int m5a_2xlarge_HASH = HashingUtils::HashString("m5a.2xlarge");
        static const int m5a_4xlarge_HASH = HashingUtils::HashString("m5a.4xlarge");
        static const int m5a_8xlarge_HASH = HashingUtils::HashString("m5a.8xlarge");
        static const int m5a_12xlarge_HASH = HashingUtils::HashString("m5a.12xlarge");
        static const int m5a_16xlarge_HASH = HashingUtils::HashString("m5a.16xlarge");
        static const int m5a_24xlarge_HASH = HashingUtils::HashString("m5a.24xlarge");
        static const int m5ad_large_HASH = HashingUtils::HashString("m5ad.large");
        static const int m5ad_xlarge_HASH = HashingUtils::HashString("m5ad.xlarge");
        static const int m5ad_2xlarge_HASH = HashingUtils::HashString("m5ad.2xlarge");
        static const int m5ad_4xlarge_HASH = HashingUtils::HashString("m5ad.4xlarge");
        static const int m5ad_8xlarge_HASH = HashingUtils::HashString("m5ad.8xlarge");
        static const int m5ad_12xlarge_HASH = HashingUtils::HashString("m5ad.12xlarge");
        static const int m5ad_16xlarge_HASH = HashingUtils::HashString("m5ad.16xlarge");
        static const int m5ad_24xlarge_HASH = HashingUtils::HashString("m5ad.24xlarge");
        static const int m5d_large_HASH = HashingUtils::HashString("m5d.large");
        static const int m5d_xlarge_HASH = HashingUtils::HashString("m5d.xlarge");
        static const int m5d_2xlarge_HASH = HashingUtils::HashString("m5d.2xlarge");
        static const int m5d_4xlarge_HASH = HashingUtils::HashString("m5d.4xlarge");
        static const int m5d_8xlarge_HASH = HashingUtils::HashString("m5d.8xlarge");
        static const int m5d_12xlarge_HASH = HashingUtils::HashString("m5d.12xlarge");
        static const int m5d_16xlarge_HASH = HashingUtils::HashString("m5d.16xlarge");
        static const int m5d_24xlarge_HASH = HashingUtils::HashString("m5d.24xlarge");
        static const int m5d_metal_HASH = HashingUtils::HashString("m5d.metal");
        static const int m5dn_large_HASH = HashingUtils::HashString("m5dn.large");
        static const int m5dn_xlarge_HASH = HashingUtils::HashString("m5dn.xlarge");
        static const int m5dn_2xlarge_HASH = HashingUtils::HashString("m5dn.2xlarge");
        static const int m5dn_4xlarge_HASH = HashingUtils::HashString("m5dn.4xlarge");
        static const int m5dn_8xlarge_HASH = HashingUtils::HashString("m5dn.8xlarge");
        static const int m5dn_12xlarge_HASH = HashingUtils::HashString("m5dn.12xlarge");
        static const int m5dn_16xlarge_HASH = HashingUtils::HashString("m5dn.16xlarge");
        static const int m5dn_24xlarge_HASH = HashingUtils::HashString("m5dn.24xlarge");
        static const int m5dn_metal_HASH = HashingUtils::HashString("m5dn.metal");
        static const int m5n_large_HASH = HashingUtils::HashString("m5n.large");
        static const int m5n_xlarge_HASH = HashingUtils::HashString("m5n.xlarge");
        static const int m5n_2xlarge_HASH = HashingUtils::HashString("m5n.2xlarge");
        static const int m5n_4xlarge_HASH = HashingUtils::HashString("m5n.4xlarge");
        static const int m5n_8xlarge_HASH = HashingUtils::HashString("m5n.8xlarge");
        static const int m5n_12xlarge_HASH = HashingUtils::HashString("m5n.12xlarge");
        static const int m5n_16xlarge_HASH = HashingUtils::HashString("m5n.16xlarge");
        static const int m5n_24xlarge_HASH = HashingUtils::HashString("m5n.24xlarge");
        static const int m5n_metal_HASH = HashingUtils::HashString("m5n.metal");
        static const int m5zn_large_HASH = HashingUtils::HashString("m5zn.large");
        static const int m5zn_xlarge_HASH = HashingUtils::HashString("m5zn.xlarge");
        static const int m5zn_2xlarge_HASH = HashingUtils::HashString("m5zn.2xlarge");
        static const int m5zn_3xlarge_HASH = HashingUtils::HashString("m5zn.3xlarge");
        static const int m5zn_6xlarge_HASH = HashingUtils::HashString("m5zn.6xlarge");
        static const int m5zn_12xlarge_HASH = HashingUtils::HashString("m5zn.12xlarge");
        static const int m5zn_metal_HASH = HashingUtils::HashString("m5zn.metal");
        static const int m6a_large_HASH = HashingUtils::HashString("m6a.large");
        static const int m6a_xlarge_HASH = HashingUtils::HashString("m6a.xlarge");
        static const int m6a_2xlarge_HASH = HashingUtils::HashString("m6a.2xlarge");
        static const int m6a_4xlarge_HASH = HashingUtils::HashString("m6a.4xlarge");
        static const int m6a_8xlarge_HASH = HashingUtils::HashString("m6a.8xlarge");
        static const int m6a_12xlarge_HASH = HashingUtils::HashString("m6a.12xlarge");
        static const int m6a_16xlarge_HASH = HashingUtils::HashString("m6a.16xlarge");
        static const int m6a_24xlarge_HASH = HashingUtils::HashString("m6a.24xlarge");
        static const int m6a_32xlarge_HASH = HashingUtils::HashString("m6a.32xlarge");
        static const int m6a_48xlarge_HASH = HashingUtils::HashString("m6a.48xlarge");
        static const int m6g_metal_HASH = HashingUtils::HashString("m6g.metal");
        static const int m6g_medium_HASH = HashingUtils::HashString("m6g.medium");
        static const int m6g_large_HASH = HashingUtils::HashString("m6g.large");
        static const int m6g_xlarge_HASH = HashingUtils::HashString("m6g.xlarge");
        static const int m6g_2xlarge_HASH = HashingUtils::HashString("m6g.2xlarge");
        static const int m6g_4xlarge_HASH = HashingUtils::HashString("m6g.4xlarge");
        static const int m6g_8xlarge_HASH = HashingUtils::HashString("m6g.8xlarge");
        static const int m6g_12xlarge_HASH = HashingUtils::HashString("m6g.12xlarge");
        static const int m6g_16xlarge_HASH = HashingUtils::HashString("m6g.16xlarge");
        static const int m6gd_metal_HASH = HashingUtils::HashString("m6gd.metal");
        static const int m6gd_medium_HASH = HashingUtils::HashString("m6gd.medium");
        static const int m6gd_large_HASH = HashingUtils::HashString("m6gd.large");
        static const int m6gd_xlarge_HASH = HashingUtils::HashString("m6gd.xlarge");
        static const int m6gd_2xlarge_HASH = HashingUtils::HashString("m6gd.2xlarge");
        static const int m6gd_4xlarge_HASH = HashingUtils::HashString("m6gd.4xlarge");
        static const int m6gd_8xlarge_HASH = HashingUtils::HashString("m6gd.8xlarge");
        static const int m6gd_12xlarge_HASH = HashingUtils::HashString("m6gd.12xlarge");
        static const int m6gd_16xlarge_HASH = HashingUtils::HashString("m6gd.16xlarge");
        static const int m6i_large_HASH = HashingUtils::HashString("m6i.large");
        static const int m6i_xlarge_HASH = HashingUtils::HashString("m6i.xlarge");
        static const int m6i_2xlarge_HASH = HashingUtils::HashString("m6i.2xlarge");
        static const int m6i_4xlarge_HASH = HashingUtils::HashString("m6i.4xlarge");
        static const int m6i_8xlarge_HASH = HashingUtils::HashString("m6i.8xlarge");
        static const int m6i_12xlarge_HASH = HashingUtils::HashString("m6i.12xlarge");
        static const int m6i_16xlarge_HASH = HashingUtils::HashString("m6i.16xlarge");
        static const int m6i_24xlarge_HASH = HashingUtils::HashString("m6i.24xlarge");
        static const int m6i_32xlarge_HASH = HashingUtils::HashString("m6i.32xlarge");
        static const int m6i_metal_HASH = HashingUtils::HashString("m6i.metal");
        static const int mac1_metal_HASH = HashingUtils::HashString("mac1.metal");
        static const int p2_xlarge_HASH = HashingUtils::HashString("p2.xlarge");
        static const int p2_8xlarge_HASH = HashingUtils::HashString("p2.8xlarge");
        static const int p2_16xlarge_HASH = HashingUtils::HashString("p2.16xlarge");
        static const int p3_2xlarge_HASH = HashingUtils::HashString("p3.2xlarge");
        static const int p3_8xlarge_HASH = HashingUtils::HashString("p3.8xlarge");
        static const int p3_16xlarge_HASH = HashingUtils::HashString("p3.16xlarge");
        static const int p3dn_24xlarge_HASH = HashingUtils::HashString("p3dn.24xlarge");
        static const int p4d_24xlarge_HASH = HashingUtils::HashString("p4d.24xlarge");
        static const int r3_large_HASH = HashingUtils::HashString("r3.large");
        static const int r3_xlarge_HASH = HashingUtils::HashString("r3.xlarge");
        static const int r3_2xlarge_HASH = HashingUtils::HashString("r3.2xlarge");
        static const int r3_4xlarge_HASH = HashingUtils::HashString("r3.4xlarge");
        static const int r3_8xlarge_HASH = HashingUtils::HashString("r3.8xlarge");
        static const int r4_large_HASH = HashingUtils::HashString("r4.large");
        static const int r4_xlarge_HASH = HashingUtils::HashString("r4.xlarge");
        static const int r4_2xlarge_HASH = HashingUtils::HashString("r4.2xlarge");
        static const int r4_4xlarge_HASH = HashingUtils::HashString("r4.4xlarge");
        static const int r4_8xlarge_HASH = HashingUtils::HashString("r4.8xlarge");
        static const int r4_16xlarge_HASH = HashingUtils::HashString("r4.16xlarge");
        static const int r5_large_HASH = HashingUtils::HashString("r5.large");
        static const int r5_xlarge_HASH = HashingUtils::HashString("r5.xlarge");
        static const int r5_2xlarge_HASH = HashingUtils::HashString("r5.2xlarge");
        static const int r5_4xlarge_HASH = HashingUtils::HashString("r5.4xlarge");
        static const int r5_8xlarge_HASH = HashingUtils::HashString("r5.8xlarge");
        static const int r5_12xlarge_HASH = HashingUtils::HashString("r5.12xlarge");
        static const int r5_16xlarge_HASH = HashingUtils::HashString("r5.16xlarge");
        static const int r5_24xlarge_HASH = HashingUtils::HashString("r5.24xlarge");
        static const int r5_metal_HASH = HashingUtils::HashString("r5.metal");
        static const int r5a_large_HASH = HashingUtils::HashString("r5a.large");
        static const int r5a_xlarge_HASH = HashingUtils::HashString("r5a.xlarge");
        static const int r5a_2xlarge_HASH = HashingUtils::HashString("r5a.2xlarge");
        static const int r5a_4xlarge_HASH = HashingUtils::HashString("r5a.4xlarge");
        static const int r5a_8xlarge_HASH = HashingUtils::HashString("r5a.8xlarge");
        static const int r5a_12xlarge_HASH = HashingUtils::HashString("r5a.12xlarge");
        static const int r5a_16xlarge_HASH = HashingUtils::HashString("r5a.16xlarge");
        static const int r5a_24xlarge_HASH = HashingUtils::HashString("r5a.24xlarge");
        static const int r5ad_large_HASH = HashingUtils::HashString("r5ad.large");
        static const int r5ad_xlarge_HASH = HashingUtils::HashString("r5ad.xlarge");
        static const int r5ad_2xlarge_HASH = HashingUtils::HashString("r5ad.2xlarge");
        static const int r5ad_4xlarge_HASH = HashingUtils::HashString("r5ad.4xlarge");
        static const int r5ad_8xlarge_HASH = HashingUtils::HashString("r5ad.8xlarge");
        static const int r5ad_12xlarge_HASH = HashingUtils::HashString("r5ad.12xlarge");
        static const int r5ad_16xlarge_HASH = HashingUtils::HashString("r5ad.16xlarge");
        static const int r5ad_24xlarge_HASH = HashingUtils::HashString("r5ad.24xlarge");
        static const int r5b_large_HASH = HashingUtils::HashString("r5b.large");
        static const int r5b_xlarge_HASH = HashingUtils::HashString("r5b.xlarge");
        static const int r5b_2xlarge_HASH = HashingUtils::HashString("r5b.2xlarge");
        static const int r5b_4xlarge_HASH = HashingUtils::HashString("r5b.4xlarge");
        static const int r5b_8xlarge_HASH = HashingUtils::HashString("r5b.8xlarge");
        static const int r5b_12xlarge_HASH = HashingUtils::HashString("r5b.12xlarge");
        static const int r5b_16xlarge_HASH = HashingUtils::HashString("r5b.16xlarge");
        static const int r5b_24xlarge_HASH = HashingUtils::HashString("r5b.24xlarge");
        static const int r5b_metal_HASH = HashingUtils::HashString("r5b.metal");
        static const int r5d_large_HASH = HashingUtils::HashString("r5d.large");
        static const int r5d_xlarge_HASH = HashingUtils::HashString("r5d.xlarge");
        static const int r5d_2xlarge_HASH = HashingUtils::HashString("r5d.2xlarge");
        static const int r5d_4xlarge_HASH = HashingUtils::HashString("r5d.4xlarge");
        static const int r5d_8xlarge_HASH = HashingUtils::HashString("r5d.8xlarge");
        static const int r5d_12xlarge_HASH = HashingUtils::HashString("r5d.12xlarge");
        static const int r5d_16xlarge_HASH = HashingUtils::HashString("r5d.16xlarge");
        static const int r5d_24xlarge_HASH = HashingUtils::HashString("r5d.24xlarge");
        static const int r5d_metal_HASH = HashingUtils::HashString("r5d.metal");
        static const int r5dn_large_HASH = HashingUtils::HashString("r5dn.large");
        static const int r5dn_xlarge_HASH = HashingUtils::HashString("r5dn.xlarge");
        static const int r5dn_2xlarge_HASH = HashingUtils::HashString("r5dn.2xlarge");
        static const int r5dn_4xlarge_HASH = HashingUtils::HashString("r5dn.4xlarge");
        static const int r5dn_8xlarge_HASH = HashingUtils::HashString("r5dn.8xlarge");
        static const int r5dn_12xlarge_HASH = HashingUtils::HashString("r5dn.12xlarge");
        static const int r5dn_16xlarge_HASH = HashingUtils::HashString("r5dn.16xlarge");
        static const int r5dn_24xlarge_HASH = HashingUtils::HashString("r5dn.24xlarge");
        static const int r5dn_metal_HASH = HashingUtils::HashString("r5dn.metal");
        static const int r5n_large_HASH = HashingUtils::HashString("r5n.large");
        static const int r5n_xlarge_HASH = HashingUtils::HashString("r5n.xlarge");
        static const int r5n_2xlarge_HASH = HashingUtils::HashString("r5n.2xlarge");
        static const int r5n_4xlarge_HASH = HashingUtils::HashString("r5n.4xlarge");
        static const int r5n_8xlarge_HASH = HashingUtils::HashString("r5n.8xlarge");
        static const int r5n_12xlarge_HASH = HashingUtils::HashString("r5n.12xlarge");
        static const int r5n_16xlarge_HASH = HashingUtils::HashString("r5n.16xlarge");
        static const int r5n_24xlarge_HASH = HashingUtils::HashString("r5n.24xlarge");
        static const int r5n_metal_HASH = HashingUtils::HashString("r5n.metal");
        static const int r6g_medium_HASH = HashingUtils::HashString("r6g.medium");
        static const int r6g_large_HASH = HashingUtils::HashString("r6g.large");
        static const int r6g_xlarge_HASH = HashingUtils::HashString("r6g.xlarge");
        static const int r6g_2xlarge_HASH = HashingUtils::HashString("r6g.2xlarge");
        static const int r6g_4xlarge_HASH = HashingUtils::HashString("r6g.4xlarge");
        static const int r6g_8xlarge_HASH = HashingUtils::HashString("r6g.8xlarge");
        static const int r6g_12xlarge_HASH = HashingUtils::HashString("r6g.12xlarge");
        static const int r6g_16xlarge_HASH = HashingUtils::HashString("r6g.16xlarge");
        static const int r6g_metal_HASH = HashingUtils::HashString("r6g.metal");
        static const int r6gd_medium_HASH = HashingUtils::HashString("r6gd.medium");
        static const int r6gd_large_HASH = HashingUtils::HashString("r6gd.large");
        static const int r6gd_xlarge_HASH = HashingUtils::HashString("r6gd.xlarge");
        static const int r6gd_2xlarge_HASH = HashingUtils::HashString("r6gd.2xlarge");
        static const int r6gd_4xlarge_HASH = HashingUtils::HashString("r6gd.4xlarge");
        static const int r6gd_8xlarge_HASH = HashingUtils::HashString("r6gd.8xlarge");
        static const int r6gd_12xlarge_HASH = HashingUtils::HashString("r6gd.12xlarge");
        static const int r6gd_16xlarge_HASH = HashingUtils::HashString("r6gd.16xlarge");
        static const int r6gd_metal_HASH = HashingUtils::HashString("r6gd.metal");
        static const int r6i_large_HASH = HashingUtils::HashString("r6i.large");
        static const int r6i_xlarge_HASH = HashingUtils::HashString("r6i.xlarge");
        static const int r6i_2xlarge_HASH = HashingUtils::HashString("r6i.2xlarge");
        static const int r6i_4xlarge_HASH = HashingUtils::HashString("r6i.4xlarge");
        static const int r6i_8xlarge_HASH = HashingUtils::HashString("r6i.8xlarge");
        static const int r6i_12xlarge_HASH = HashingUtils::HashString("r6i.12xlarge");
        static const int r6i_16xlarge_HASH = HashingUtils::HashString("r6i.16xlarge");
        static const int r6i_24xlarge_HASH = HashingUtils::HashString("r6i.24xlarge");
        static const int r6i_32xlarge_HASH = HashingUtils::HashString("r6i.32xlarge");
        static const int r6i_metal_HASH = HashingUtils::HashString("r6i.metal");
        static const int t1_micro_HASH = HashingUtils::HashString("t1.micro");
        static const int t2_nano_HASH = HashingUtils::HashString("t2.nano");
        static const int t2_micro_HASH = HashingUtils::HashString("t2.micro");
        static const int t2_small_HASH = HashingUtils::HashString("t2.small");
        static const int t2_medium_HASH = HashingUtils::HashString("t2.medium");
        static const int t2_large_HASH = HashingUtils::HashString("t2.large");
        static const int t2_xlarge_HASH = HashingUtils::HashString("t2.xlarge");
        static const int t2_2xlarge_HASH = HashingUtils::HashString("t2.2xlarge");
        static const int t3_nano_HASH = HashingUtils::HashString("t3.nano");
        static const int t3_micro_HASH = HashingUtils::HashString("t3.micro");
        static const int t3_small_HASH = HashingUtils::HashString("t3.small");
        static const int t3_medium_HASH = HashingUtils::HashString("t3.medium");
        static const int t3_large_HASH = HashingUtils::HashString("t3.large");
        static const int t3_xlarge_HASH = HashingUtils::HashString("t3.xlarge");
        static const int t3_2xlarge_HASH = HashingUtils::HashString("t3.2xlarge");
        static const int t3a_nano_HASH = HashingUtils::HashString("t3a.nano");
        static const int t3a_micro_HASH = HashingUtils::HashString("t3a.micro");
        static const int t3a_small_HASH = HashingUtils::HashString("t3a.small");
        static const int t3a_medium_HASH = HashingUtils::HashString("t3a.medium");
        static const int t3a_large_HASH = HashingUtils::HashString("t3a.large");
        static const int t3a_xlarge_HASH = HashingUtils::HashString("t3a.xlarge");
        static const int t3a_2xlarge_HASH = HashingUtils::HashString("t3a.2xlarge");
        static const int t4g_nano_HASH = HashingUtils::HashString("t4g.nano");
        static const int t4g_micro_HASH = HashingUtils::HashString("t4g.micro");
        static const int t4g_small_HASH = HashingUtils::HashString("t4g.small");
        static const int t4g_medium_HASH = HashingUtils::HashString("t4g.medium");
        static const int t4g_large_HASH = HashingUtils::HashString("t4g.large");
        static const int t4g_xlarge_HASH = HashingUtils::HashString("t4g.xlarge");
        static const int t4g_2xlarge_HASH = HashingUtils::HashString("t4g.2xlarge");
        static const int u_6tb1_56xlarge_HASH = HashingUtils::HashString("u-6tb1.56xlarge");
        static const int u_6tb1_112xlarge_HASH = HashingUtils::HashString("u-6tb1.112xlarge");
        static const int u_9tb1_112xlarge_HASH = HashingUtils::HashString("u-9tb1.112xlarge");
        static const int u_12tb1_112xlarge_HASH = HashingUtils::HashString("u-12tb1.112xlarge");
        static const int u_6tb1_metal_HASH = HashingUtils::HashString("u-6tb1.metal");
        static const int u_9tb1_metal_HASH = HashingUtils::HashString("u-9tb1.metal");
        static const int u_12tb1_metal_HASH = HashingUtils::HashString("u-12tb1.metal");
        static const int u_18tb1_metal_HASH = HashingUtils::HashString("u-18tb1.metal");
        static const int u_24tb1_metal_HASH = HashingUtils::HashString("u-24tb1.metal");
        static const int vt1_3xlarge_HASH = HashingUtils::HashString("vt1.3xlarge");
        static const int vt1_6xlarge_HASH = HashingUtils::HashString("vt1.6xlarge");
        static const int vt1_24xlarge_HASH = HashingUtils::HashString("vt1.24xlarge");
        static const int x1_16xlarge_HASH = HashingUtils::HashString("x1.16xlarge");
        static const int x1_32xlarge_HASH = HashingUtils::HashString("x1.32xlarge");
        static const int x1e_xlarge_HASH = HashingUtils::HashString("x1e.xlarge");
        static const int x1e_2xlarge_HASH = HashingUtils::HashString("x1e.2xlarge");
        static const int x1e_4xlarge_HASH = HashingUtils::HashString("x1e.4xlarge");
        static const int x1e_8xlarge_HASH = HashingUtils::HashString("x1e.8xlarge");
        static const int x1e_16xlarge_HASH = HashingUtils::HashString("x1e.16xlarge");
        static const int x1e_32xlarge_HASH = HashingUtils::HashString("x1e.32xlarge");
        static const int x2iezn_2xlarge_HASH = HashingUtils::HashString("x2iezn.2xlarge");
        static const int x2iezn_4xlarge_HASH = HashingUtils::HashString("x2iezn.4xlarge");
        static const int x2iezn_6xlarge_HASH = HashingUtils::HashString("x2iezn.6xlarge");
        static const int x2iezn_8xlarge_HASH = HashingUtils::HashString("x2iezn.8xlarge");
        static const int x2iezn_12xlarge_HASH = HashingUtils::HashString("x2iezn.12xlarge");
        static const int x2iezn_metal_HASH = HashingUtils::HashString("x2iezn.metal");
        static const int x2gd_medium_HASH = HashingUtils::HashString("x2gd.medium");
        static const int x2gd_large_HASH = HashingUtils::HashString("x2gd.large");
        static const int x2gd_xlarge_HASH = HashingUtils::HashString("x2gd.xlarge");
        static const int x2gd_2xlarge_HASH = HashingUtils::HashString("x2gd.2xlarge");
        static const int x2gd_4xlarge_HASH = HashingUtils::HashString("x2gd.4xlarge");
        static const int x2gd_8xlarge_HASH = HashingUtils::HashString("x2gd.8xlarge");
        static const int x2gd_12xlarge_HASH = HashingUtils::HashString("x2gd.12xlarge");
        static const int x2gd_16xlarge_HASH = HashingUtils::HashString("x2gd.16xlarge");
        static const int x2gd_metal_HASH = HashingUtils::HashString("x2gd.metal");
        static const int z1d_large_HASH = HashingUtils::HashString("z1d.large");
        static const int z1d_xlarge_HASH = HashingUtils::HashString("z1d.xlarge");
        static const int z1d_2xlarge_HASH = HashingUtils::HashString("z1d.2xlarge");
        static const int z1d_3xlarge_HASH = HashingUtils::HashString("z1d.3xlarge");
        static const int z1d_6xlarge_HASH = HashingUtils::HashString("z1d.6xlarge");
        static const int z1d_12xlarge_HASH = HashingUtils::HashString("z1d.12xlarge");
        static const int z1d_metal_HASH = HashingUtils::HashString("z1d.metal");
        static const int x2idn_16xlarge_HASH = HashingUtils::HashString("x2idn.16xlarge");
        static const int x2idn_24xlarge_HASH = HashingUtils::HashString("x2idn.24xlarge");
        static const int x2idn_32xlarge_HASH = HashingUtils::HashString("x2idn.32xlarge");
        static const int x2iedn_xlarge_HASH = HashingUtils::HashString("x2iedn.xlarge");
        static const int x2iedn_2xlarge_HASH = HashingUtils::HashString("x2iedn.2xlarge");
        static const int x2iedn_4xlarge_HASH = HashingUtils::HashString("x2iedn.4xlarge");
        static const int x2iedn_8xlarge_HASH = HashingUtils::HashString("x2iedn.8xlarge");
        static const int x2iedn_16xlarge_HASH = HashingUtils::HashString("x2iedn.16xlarge");
        static const int x2iedn_24xlarge_HASH = HashingUtils::HashString("x2iedn.24xlarge");
        static const int x2iedn_32xlarge_HASH = HashingUtils::HashString("x2iedn.32xlarge");
        static const int c6a_large_HASH = HashingUtils::HashString("c6a.large");
        static const int c6a_xlarge_HASH = HashingUtils::HashString("c6a.xlarge");
        static const int c6a_2xlarge_HASH = HashingUtils::HashString("c6a.2xlarge");
        static const int c6a_4xlarge_HASH = HashingUtils::HashString("c6a.4xlarge");
        static const int c6a_8xlarge_HASH = HashingUtils::HashString("c6a.8xlarge");
        static const int c6a_12xlarge_HASH = HashingUtils::HashString("c6a.12xlarge");
        static const int c6a_16xlarge_HASH = HashingUtils::HashString("c6a.16xlarge");
        static const int c6a_24xlarge_HASH = HashingUtils::HashString("c6a.24xlarge");
        static const int c6a_32xlarge_HASH = HashingUtils::HashString("c6a.32xlarge");
        static const int c6a_48xlarge_HASH = HashingUtils::HashString("c6a.48xlarge");
        static const int c6a_metal_HASH = HashingUtils::HashString("c6a.metal");
        static const int m6a_metal_HASH = HashingUtils::HashString("m6a.metal");
        static const int i4i_large_HASH = HashingUtils::HashString("i4i.large");
        static const int i4i_xlarge_HASH = HashingUtils::HashString("i4i.xlarge");
        static const int i4i_2xlarge_HASH = HashingUtils::HashString("i4i.2xlarge");
        static const int i4i_4xlarge_HASH = HashingUtils::HashString("i4i.4xlarge");
        static const int i4i_8xlarge_HASH = HashingUtils::HashString("i4i.8xlarge");
        static const int i4i_16xlarge_HASH = HashingUtils::HashString("i4i.16xlarge");
        static const int i4i_32xlarge_HASH = HashingUtils::HashString("i4i.32xlarge");
        static const int i4i_metal_HASH = HashingUtils::HashString("i4i.metal");
        static const int x2idn_metal_HASH = HashingUtils::HashString("x2idn.metal");
        static const int x2iedn_metal_HASH = HashingUtils::HashString("x2iedn.metal");
        static const int c7g_medium_HASH = HashingUtils::HashString("c7g.medium");
        static const int c7g_large_HASH = HashingUtils::HashString("c7g.large");
        static const int c7g_xlarge_HASH = HashingUtils::HashString("c7g.xlarge");
        static const int c7g_2xlarge_HASH = HashingUtils::HashString("c7g.2xlarge");
        static const int c7g_4xlarge_HASH = HashingUtils::HashString("c7g.4xlarge");
        static const int c7g_8xlarge_HASH = HashingUtils::HashString("c7g.8xlarge");
        static const int c7g_12xlarge_HASH = HashingUtils::HashString("c7g.12xlarge");
        static const int c7g_16xlarge_HASH = HashingUtils::HashString("c7g.16xlarge");
        static const int mac2_metal_HASH = HashingUtils::HashString("mac2.metal");
        static const int c6id_large_HASH = HashingUtils::HashString("c6id.large");
        static const int c6id_xlarge_HASH = HashingUtils::HashString("c6id.xlarge");
        static const int c6id_2xlarge_HASH = HashingUtils::HashString("c6id.2xlarge");
        static const int c6id_4xlarge_HASH = HashingUtils::HashString("c6id.4xlarge");
        static const int c6id_8xlarge_HASH = HashingUtils::HashString("c6id.8xlarge");
        static const int c6id_12xlarge_HASH = HashingUtils::HashString("c6id.12xlarge");
        static const int c6id_16xlarge_HASH = HashingUtils::HashString("c6id.16xlarge");
        static const int c6id_24xlarge_HASH = HashingUtils::HashString("c6id.24xlarge");
        static const int c6id_32xlarge_HASH = HashingUtils::HashString("c6id.32xlarge");
        static const int c6id_metal_HASH = HashingUtils::HashString("c6id.metal");
        static const int m6id_large_HASH = HashingUtils::HashString("m6id.large");
        static const int m6id_xlarge_HASH = HashingUtils::HashString("m6id.xlarge");
        static const int m6id_2xlarge_HASH = HashingUtils::HashString("m6id.2xlarge");
        static const int m6id_4xlarge_HASH = HashingUtils::HashString("m6id.4xlarge");
        static const int m6id_8xlarge_HASH = HashingUtils::HashString("m6id.8xlarge");
        static const int m6id_12xlarge_HASH = HashingUtils::HashString("m6id.12xlarge");
        static const int m6id_16xlarge_HASH = HashingUtils::HashString("m6id.16xlarge");
        static const int m6id_24xlarge_HASH = HashingUtils::HashString("m6id.24xlarge");
        static const int m6id_32xlarge_HASH = HashingUtils::HashString("m6id.32xlarge");
        static const int m6id_metal_HASH = HashingUtils::HashString("m6id.metal");
        static const int r6id_large_HASH = HashingUtils::HashString("r6id.large");
        static const int r6id_xlarge_HASH = HashingUtils::HashString("r6id.xlarge");
        static const int r6id_2xlarge_HASH = HashingUtils::HashString("r6id.2xlarge");
        static const int r6id_4xlarge_HASH = HashingUtils::HashString("r6id.4xlarge");
        static const int r6id_8xlarge_HASH = HashingUtils::HashString("r6id.8xlarge");
        static const int r6id_12xlarge_HASH = HashingUtils::HashString("r6id.12xlarge");
        static const int r6id_16xlarge_HASH = HashingUtils::HashString("r6id.16xlarge");
        static const int r6id_24xlarge_HASH = HashingUtils::HashString("r6id.24xlarge");
        static const int r6id_32xlarge_HASH = HashingUtils::HashString("r6id.32xlarge");
        static const int r6id_metal_HASH = HashingUtils::HashString("r6id.metal");
        static const int r6a_large_HASH = HashingUtils::HashString("r6a.large");
        static const int r6a_xlarge_HASH = HashingUtils::HashString("r6a.xlarge");
        static const int r6a_2xlarge_HASH = HashingUtils::HashString("r6a.2xlarge");
        static const int r6a_4xlarge_HASH = HashingUtils::HashString("r6a.4xlarge");
        static const int r6a_8xlarge_HASH = HashingUtils::HashString("r6a.8xlarge");
        static const int r6a_12xlarge_HASH = HashingUtils::HashString("r6a.12xlarge");
        static const int r6a_16xlarge_HASH = HashingUtils::HashString("r6a.16xlarge");
        static const int r6a_24xlarge_HASH = HashingUtils::HashString("r6a.24xlarge");
        static const int r6a_32xlarge_HASH = HashingUtils::HashString("r6a.32xlarge");
        static const int r6a_48xlarge_HASH = HashingUtils::HashString("r6a.48xlarge");
        static const int r6a_metal_HASH = HashingUtils::HashString("r6a.metal");
        static const int p4de_24xlarge_HASH = HashingUtils::HashString("p4de.24xlarge");
        static const int u_3tb1_56xlarge_HASH = HashingUtils::HashString("u-3tb1.56xlarge");
        static const int u_18tb1_112xlarge_HASH = HashingUtils::HashString("u-18tb1.112xlarge");
        static const int u_24tb1_112xlarge_HASH = HashingUtils::HashString("u-24tb1.112xlarge");
        static const int trn1_2xlarge_HASH = HashingUtils::HashString("trn1.2xlarge");
        static const int trn1_32xlarge_HASH = HashingUtils::HashString("trn1.32xlarge");
        static const int hpc6id_32xlarge_HASH = HashingUtils::HashString("hpc6id.32xlarge");
        static const int c6in_large_HASH = HashingUtils::HashString("c6in.large");
        static const int c6in_xlarge_HASH = HashingUtils::HashString("c6in.xlarge");
        static const int c6in_2xlarge_HASH = HashingUtils::HashString("c6in.2xlarge");
        static const int c6in_4xlarge_HASH = HashingUtils::HashString("c6in.4xlarge");
        static const int c6in_8xlarge_HASH = HashingUtils::HashString("c6in.8xlarge");
        static const int c6in_12xlarge_HASH = HashingUtils::HashString("c6in.12xlarge");
        static const int c6in_16xlarge_HASH = HashingUtils::HashString("c6in.16xlarge");
        static const int c6in_24xlarge_HASH = HashingUtils::HashString("c6in.24xlarge");
        static const int c6in_32xlarge_HASH = HashingUtils::HashString("c6in.32xlarge");
        static const int m6in_large_HASH = HashingUtils::HashString("m6in.large");
        static const int m6in_xlarge_HASH = HashingUtils::HashString("m6in.xlarge");
        static const int m6in_2xlarge_HASH = HashingUtils::HashString("m6in.2xlarge");
        static const int m6in_4xlarge_HASH = HashingUtils::HashString("m6in.4xlarge");
        static const int m6in_8xlarge_HASH = HashingUtils::HashString("m6in.8xlarge");
        static const int m6in_12xlarge_HASH = HashingUtils::HashString("m6in.12xlarge");
        static const int m6in_16xlarge_HASH = HashingUtils::HashString("m6in.16xlarge");
        static const int m6in_24xlarge_HASH = HashingUtils::HashString("m6in.24xlarge");
        static const int m6in_32xlarge_HASH = HashingUtils::HashString("m6in.32xlarge");
        static const int m6idn_large_HASH = HashingUtils::HashString("m6idn.large");
        static const int m6idn_xlarge_HASH = HashingUtils::HashString("m6idn.xlarge");
        static const int m6idn_2xlarge_HASH = HashingUtils::HashString("m6idn.2xlarge");
        static const int m6idn_4xlarge_HASH = HashingUtils::HashString("m6idn.4xlarge");
        static const int m6idn_8xlarge_HASH = HashingUtils::HashString("m6idn.8xlarge");
        static const int m6idn_12xlarge_HASH = HashingUtils::HashString("m6idn.12xlarge");
        static const int m6idn_16xlarge_HASH = HashingUtils::HashString("m6idn.16xlarge");
        static const int m6idn_24xlarge_HASH = HashingUtils::HashString("m6idn.24xlarge");
        static const int m6idn_32xlarge_HASH = HashingUtils::HashString("m6idn.32xlarge");
        static const int r6in_large_HASH = HashingUtils::HashString("r6in.large");
        static const int r6in_xlarge_HASH = HashingUtils::HashString("r6in.xlarge");
        static const int r6in_2xlarge_HASH = HashingUtils::HashString("r6in.2xlarge");
        static const int r6in_4xlarge_HASH = HashingUtils::HashString("r6in.4xlarge");
        static const int r6in_8xlarge_HASH = HashingUtils::HashString("r6in.8xlarge");
        static const int r6in_12xlarge_HASH = HashingUtils::HashString("r6in.12xlarge");
        static const int r6in_16xlarge_HASH = HashingUtils::HashString("r6in.16xlarge");
        static const int r6in_24xlarge_HASH = HashingUtils::HashString("r6in.24xlarge");
        static const int r6in_32xlarge_HASH = HashingUtils::HashString("r6in.32xlarge");
        static const int r6idn_large_HASH = HashingUtils::HashString("r6idn.large");
        static const int r6idn_xlarge_HASH = HashingUtils::HashString("r6idn.xlarge");
        static const int r6idn_2xlarge_HASH = HashingUtils::HashString("r6idn.2xlarge");
        static const int r6idn_4xlarge_HASH = HashingUtils::HashString("r6idn.4xlarge");
        static const int r6idn_8xlarge_HASH = HashingUtils::HashString("r6idn.8xlarge");
        static const int r6idn_12xlarge_HASH = HashingUtils::HashString("r6idn.12xlarge");
        static const int r6idn_16xlarge_HASH = HashingUtils::HashString("r6idn.16xlarge");
        static const int r6idn_24xlarge_HASH = HashingUtils::HashString("r6idn.24xlarge");
        static const int r6idn_32xlarge_HASH = HashingUtils::HashString("r6idn.32xlarge");
        static const int c7g_metal_HASH = HashingUtils::HashString("c7g.metal");
        static const int m7g_medium_HASH = HashingUtils::HashString("m7g.medium");
        static const int m7g_large_HASH = HashingUtils::HashString("m7g.large");
        static const int m7g_xlarge_HASH = HashingUtils::HashString("m7g.xlarge");
        static const int m7g_2xlarge_HASH = HashingUtils::HashString("m7g.2xlarge");
        static const int m7g_4xlarge_HASH = HashingUtils::HashString("m7g.4xlarge");
        static const int m7g_8xlarge_HASH = HashingUtils::HashString("m7g.8xlarge");
        static const int m7g_12xlarge_HASH = HashingUtils::HashString("m7g.12xlarge");
        static const int m7g_16xlarge_HASH = HashingUtils::HashString("m7g.16xlarge");
        static const int m7g_metal_HASH = HashingUtils::HashString("m7g.metal");
        static const int r7g_medium_HASH = HashingUtils::HashString("r7g.medium");
        static const int r7g_large_HASH = HashingUtils::HashString("r7g.large");
        static const int r7g_xlarge_HASH = HashingUtils::HashString("r7g.xlarge");
        static const int r7g_2xlarge_HASH = HashingUtils::HashString("r7g.2xlarge");
        static const int r7g_4xlarge_HASH = HashingUtils::HashString("r7g.4xlarge");
        static const int r7g_8xlarge_HASH = HashingUtils::HashString("r7g.8xlarge");
        static const int r7g_12xlarge_HASH = HashingUtils::HashString("r7g.12xlarge");
        static const int r7g_16xlarge_HASH = HashingUtils::HashString("r7g.16xlarge");
        static const int r7g_metal_HASH = HashingUtils::HashString("r7g.metal");
        static const int c6in_metal_HASH = HashingUtils::HashString("c6in.metal");
        static const int m6in_metal_HASH = HashingUtils::HashString("m6in.metal");
        static const int m6idn_metal_HASH = HashingUtils::HashString("m6idn.metal");
        static const int r6in_metal_HASH = HashingUtils::HashString("r6in.metal");
        static const int r6idn_metal_HASH = HashingUtils::HashString("r6idn.metal");
        static const int inf2_xlarge_HASH = HashingUtils::HashString("inf2.xlarge");
        static const int inf2_8xlarge_HASH = HashingUtils::HashString("inf2.8xlarge");
        static const int inf2_24xlarge_HASH = HashingUtils::HashString("inf2.24xlarge");
        static const int inf2_48xlarge_HASH = HashingUtils::HashString("inf2.48xlarge");
        static const int trn1n_32xlarge_HASH = HashingUtils::HashString("trn1n.32xlarge");
        static const int i4g_large_HASH = HashingUtils::HashString("i4g.large");
        static const int i4g_xlarge_HASH = HashingUtils::HashString("i4g.xlarge");
        static const int i4g_2xlarge_HASH = HashingUtils::HashString("i4g.2xlarge");
        static const int i4g_4xlarge_HASH = HashingUtils::HashString("i4g.4xlarge");
        static const int i4g_8xlarge_HASH = HashingUtils::HashString("i4g.8xlarge");
        static const int i4g_16xlarge_HASH = HashingUtils::HashString("i4g.16xlarge");
        static const int hpc7g_4xlarge_HASH = HashingUtils::HashString("hpc7g.4xlarge");
        static const int hpc7g_8xlarge_HASH = HashingUtils::HashString("hpc7g.8xlarge");
        static const int hpc7g_16xlarge_HASH = HashingUtils::HashString("hpc7g.16xlarge");
        static const int c7gn_medium_HASH = HashingUtils::HashString("c7gn.medium");
        static const int c7gn_large_HASH = HashingUtils::HashString("c7gn.large");
        static const int c7gn_xlarge_HASH = HashingUtils::HashString("c7gn.xlarge");
        static const int c7gn_2xlarge_HASH = HashingUtils::HashString("c7gn.2xlarge");
        static const int c7gn_4xlarge_HASH = HashingUtils::HashString("c7gn.4xlarge");
        static const int c7gn_8xlarge_HASH = HashingUtils::HashString("c7gn.8xlarge");
        static const int c7gn_12xlarge_HASH = HashingUtils::HashString("c7gn.12xlarge");
        static const int c7gn_16xlarge_HASH = HashingUtils::HashString("c7gn.16xlarge");
        static const int p5_48xlarge_HASH = HashingUtils::HashString("p5.48xlarge");
        static const int m7i_large_HASH = HashingUtils::HashString("m7i.large");
        static const int m7i_xlarge_HASH = HashingUtils::HashString("m7i.xlarge");
        static const int m7i_2xlarge_HASH = HashingUtils::HashString("m7i.2xlarge");
        static const int m7i_4xlarge_HASH = HashingUtils::HashString("m7i.4xlarge");
        static const int m7i_8xlarge_HASH = HashingUtils::HashString("m7i.8xlarge");
        static const int m7i_12xlarge_HASH = HashingUtils::HashString("m7i.12xlarge");
        static const int m7i_16xlarge_HASH = HashingUtils::HashString("m7i.16xlarge");
        static const int m7i_24xlarge_HASH = HashingUtils::HashString("m7i.24xlarge");
        static const int m7i_48xlarge_HASH = HashingUtils::HashString("m7i.48xlarge");
        static const int m7i_flex_large_HASH = HashingUtils::HashString("m7i-flex.large");
        static const int m7i_flex_xlarge_HASH = HashingUtils::HashString("m7i-flex.xlarge");
        static const int m7i_flex_2xlarge_HASH = HashingUtils::HashString("m7i-flex.2xlarge");
        static const int m7i_flex_4xlarge_HASH = HashingUtils::HashString("m7i-flex.4xlarge");
        static const int m7i_flex_8xlarge_HASH = HashingUtils::HashString("m7i-flex.8xlarge");
        static const int m7a_medium_HASH = HashingUtils::HashString("m7a.medium");
        static const int m7a_large_HASH = HashingUtils::HashString("m7a.large");
        static const int m7a_xlarge_HASH = HashingUtils::HashString("m7a.xlarge");
        static const int m7a_2xlarge_HASH = HashingUtils::HashString("m7a.2xlarge");
        static const int m7a_4xlarge_HASH = HashingUtils::HashString("m7a.4xlarge");
        static const int m7a_8xlarge_HASH = HashingUtils::HashString("m7a.8xlarge");
        static const int m7a_12xlarge_HASH = HashingUtils::HashString("m7a.12xlarge");
        static const int m7a_16xlarge_HASH = HashingUtils::HashString("m7a.16xlarge");
        static const int m7a_24xlarge_HASH = HashingUtils::HashString("m7a.24xlarge");
        static const int m7a_32xlarge_HASH = HashingUtils::HashString("m7a.32xlarge");
        static const int m7a_48xlarge_HASH = HashingUtils::HashString("m7a.48xlarge");
        static const int m7a_metal_48xl_HASH = HashingUtils::HashString("m7a.metal-48xl");
        static const int hpc7a_12xlarge_HASH = HashingUtils::HashString("hpc7a.12xlarge");
        static const int hpc7a_24xlarge_HASH = HashingUtils::HashString("hpc7a.24xlarge");
        static const int hpc7a_48xlarge_HASH = HashingUtils::HashString("hpc7a.48xlarge");
        static const int hpc7a_96xlarge_HASH = HashingUtils::HashString("hpc7a.96xlarge");
        static const int c7gd_medium_HASH = HashingUtils::HashString("c7gd.medium");
        static const int c7gd_large_HASH = HashingUtils::HashString("c7gd.large");
        static const int c7gd_xlarge_HASH = HashingUtils::HashString("c7gd.xlarge");
        static const int c7gd_2xlarge_HASH = HashingUtils::HashString("c7gd.2xlarge");
        static const int c7gd_4xlarge_HASH = HashingUtils::HashString("c7gd.4xlarge");
        static const int c7gd_8xlarge_HASH = HashingUtils::HashString("c7gd.8xlarge");
        static const int c7gd_12xlarge_HASH = HashingUtils::HashString("c7gd.12xlarge");
        static const int c7gd_16xlarge_HASH = HashingUtils::HashString("c7gd.16xlarge");
        static const int m7gd_medium_HASH = HashingUtils::HashString("m7gd.medium");
        static const int m7gd_large_HASH = HashingUtils::HashString("m7gd.large");
        static const int m7gd_xlarge_HASH = HashingUtils::HashString("m7gd.xlarge");
        static const int m7gd_2xlarge_HASH = HashingUtils::HashString("m7gd.2xlarge");
        static const int m7gd_4xlarge_HASH = HashingUtils::HashString("m7gd.4xlarge");
        static const int m7gd_8xlarge_HASH = HashingUtils::HashString("m7gd.8xlarge");
        static const int m7gd_12xlarge_HASH = HashingUtils::HashString("m7gd.12xlarge");
        static const int m7gd_16xlarge_HASH = HashingUtils::HashString("m7gd.16xlarge");
        static const int r7gd_medium_HASH = HashingUtils::HashString("r7gd.medium");
        static const int r7gd_large_HASH = HashingUtils::HashString("r7gd.large");
        static const int r7gd_xlarge_HASH = HashingUtils::HashString("r7gd.xlarge");
        static const int r7gd_2xlarge_HASH = HashingUtils::HashString("r7gd.2xlarge");
        static const int r7gd_4xlarge_HASH = HashingUtils::HashString("r7gd.4xlarge");
        static const int r7gd_8xlarge_HASH = HashingUtils::HashString("r7gd.8xlarge");
        static const int r7gd_12xlarge_HASH = HashingUtils::HashString("r7gd.12xlarge");
        static const int r7gd_16xlarge_HASH = HashingUtils::HashString("r7gd.16xlarge");
        static const int r7a_medium_HASH = HashingUtils::HashString("r7a.medium");
        static const int r7a_large_HASH = HashingUtils::HashString("r7a.large");
        static const int r7a_xlarge_HASH = HashingUtils::HashString("r7a.xlarge");
        static const int r7a_2xlarge_HASH = HashingUtils::HashString("r7a.2xlarge");
        static const int r7a_4xlarge_HASH = HashingUtils::HashString("r7a.4xlarge");
        static const int r7a_8xlarge_HASH = HashingUtils::HashString("r7a.8xlarge");
        static const int r7a_12xlarge_HASH = HashingUtils::HashString("r7a.12xlarge");
        static const int r7a_16xlarge_HASH = HashingUtils::HashString("r7a.16xlarge");
        static const int r7a_24xlarge_HASH = HashingUtils::HashString("r7a.24xlarge");
        static const int r7a_32xlarge_HASH = HashingUtils::HashString("r7a.32xlarge");
        static const int r7a_48xlarge_HASH = HashingUtils::HashString("r7a.48xlarge");
        static const int c7i_large_HASH = HashingUtils::HashString("c7i.large");
        static const int c7i_xlarge_HASH = HashingUtils::HashString("c7i.xlarge");
        static const int c7i_2xlarge_HASH = HashingUtils::HashString("c7i.2xlarge");
        static const int c7i_4xlarge_HASH = HashingUtils::HashString("c7i.4xlarge");
        static const int c7i_8xlarge_HASH = HashingUtils::HashString("c7i.8xlarge");
        static const int c7i_12xlarge_HASH = HashingUtils::HashString("c7i.12xlarge");
        static const int c7i_16xlarge_HASH = HashingUtils::HashString("c7i.16xlarge");
        static const int c7i_24xlarge_HASH = HashingUtils::HashString("c7i.24xlarge");
        static const int c7i_48xlarge_HASH = HashingUtils::HashString("c7i.48xlarge");
        static const int mac2_m2pro_metal_HASH = HashingUtils::HashString("mac2-m2pro.metal");
        static const int r7iz_large_HASH = HashingUtils::HashString("r7iz.large");
        static const int r7iz_xlarge_HASH = HashingUtils::HashString("r7iz.xlarge");
        static const int r7iz_2xlarge_HASH = HashingUtils::HashString("r7iz.2xlarge");
        static const int r7iz_4xlarge_HASH = HashingUtils::HashString("r7iz.4xlarge");
        static const int r7iz_8xlarge_HASH = HashingUtils::HashString("r7iz.8xlarge");
        static const int r7iz_12xlarge_HASH = HashingUtils::HashString("r7iz.12xlarge");
        static const int r7iz_16xlarge_HASH = HashingUtils::HashString("r7iz.16xlarge");
        static const int r7iz_32xlarge_HASH = HashingUtils::HashString("r7iz.32xlarge");
        static const int c7a_medium_HASH = HashingUtils::HashString("c7a.medium");
        static const int c7a_large_HASH = HashingUtils::HashString("c7a.large");
        static const int c7a_xlarge_HASH = HashingUtils::HashString("c7a.xlarge");
        static const int c7a_2xlarge_HASH = HashingUtils::HashString("c7a.2xlarge");
        static const int c7a_4xlarge_HASH = HashingUtils::HashString("c7a.4xlarge");
        static const int c7a_8xlarge_HASH = HashingUtils::HashString("c7a.8xlarge");
        static const int c7a_12xlarge_HASH = HashingUtils::HashString("c7a.12xlarge");
        static const int c7a_16xlarge_HASH = HashingUtils::HashString("c7a.16xlarge");
        static const int c7a_24xlarge_HASH = HashingUtils::HashString("c7a.24xlarge");
        static const int c7a_32xlarge_HASH = HashingUtils::HashString("c7a.32xlarge");
        static const int c7a_48xlarge_HASH = HashingUtils::HashString("c7a.48xlarge");
        static const int c7a_metal_48xl_HASH = HashingUtils::HashString("c7a.metal-48xl");
        static const int r7a_metal_48xl_HASH = HashingUtils::HashString("r7a.metal-48xl");
        static const int r7i_large_HASH = HashingUtils::HashString("r7i.large");
        static const int r7i_xlarge_HASH = HashingUtils::HashString("r7i.xlarge");
        static const int r7i_2xlarge_HASH = HashingUtils::HashString("r7i.2xlarge");
        static const int r7i_4xlarge_HASH = HashingUtils::HashString("r7i.4xlarge");
        static const int r7i_8xlarge_HASH = HashingUtils::HashString("r7i.8xlarge");
        static const int r7i_12xlarge_HASH = HashingUtils::HashString("r7i.12xlarge");
        static const int r7i_16xlarge_HASH = HashingUtils::HashString("r7i.16xlarge");
        static const int r7i_24xlarge_HASH = HashingUtils::HashString("r7i.24xlarge");
        static const int r7i_48xlarge_HASH = HashingUtils::HashString("r7i.48xlarge");
        static const int dl2q_24xlarge_HASH = HashingUtils::HashString("dl2q.24xlarge");
        static const int mac2_m2_metal_HASH = HashingUtils::HashString("mac2-m2.metal");
        static const int i4i_12xlarge_HASH = HashingUtils::HashString("i4i.12xlarge");
        static const int i4i_24xlarge_HASH = HashingUtils::HashString("i4i.24xlarge");
        static const int c7i_metal_24xl_HASH = HashingUtils::HashString("c7i.metal-24xl");
        static const int c7i_metal_48xl_HASH = HashingUtils::HashString("c7i.metal-48xl");
        static const int m7i_metal_24xl_HASH = HashingUtils::HashString("m7i.metal-24xl");
        static const int m7i_metal_48xl_HASH = HashingUtils::HashString("m7i.metal-48xl");
        static const int r7i_metal_24xl_HASH = HashingUtils::HashString("r7i.metal-24xl");
        static const int r7i_metal_48xl_HASH = HashingUtils::HashString("r7i.metal-48xl");
        static const int r7iz_metal_16xl_HASH = HashingUtils::HashString("r7iz.metal-16xl");
        static const int r7iz_metal_32xl_HASH = HashingUtils::HashString("r7iz.metal-32xl");
        static const int c7gd_metal_HASH = HashingUtils::HashString("c7gd.metal");
        static const int m7gd_metal_HASH = HashingUtils::HashString("m7gd.metal");
        static const int r7gd_metal_HASH = HashingUtils::HashString("r7gd.metal");
        static const int g6_xlarge_HASH = HashingUtils::HashString("g6.xlarge");
        static const int g6_2xlarge_HASH = HashingUtils::HashString("g6.2xlarge");
        static const int g6_4xlarge_HASH = HashingUtils::HashString("g6.4xlarge");
        static const int g6_8xlarge_HASH = HashingUtils::HashString("g6.8xlarge");
        static const int g6_12xlarge_HASH = HashingUtils::HashString("g6.12xlarge");
        static const int g6_16xlarge_HASH = HashingUtils::HashString("g6.16xlarge");
        static const int g6_24xlarge_HASH = HashingUtils::HashString("g6.24xlarge");
        static const int g6_48xlarge_HASH = HashingUtils::HashString("g6.48xlarge");
        static const int gr6_4xlarge_HASH = HashingUtils::HashString("gr6.4xlarge");
        static const int gr6_8xlarge_HASH = HashingUtils::HashString("gr6.8xlarge");
        static const int c7i_flex_large_HASH = HashingUtils::HashString("c7i-flex.large");
        static const int c7i_flex_xlarge_HASH = HashingUtils::HashString("c7i-flex.xlarge");
        static const int c7i_flex_2xlarge_HASH = HashingUtils::HashString("c7i-flex.2xlarge");
        static const int c7i_flex_4xlarge_HASH = HashingUtils::HashString("c7i-flex.4xlarge");
        static const int c7i_flex_8xlarge_HASH = HashingUtils::HashString("c7i-flex.8xlarge");
        static const int u7i_12tb_224xlarge_HASH = HashingUtils::HashString("u7i-12tb.224xlarge");
        static const int u7in_16tb_224xlarge_HASH = HashingUtils::HashString("u7in-16tb.224xlarge");
        static const int u7in_24tb_224xlarge_HASH = HashingUtils::HashString("u7in-24tb.224xlarge");
        static const int u7in_32tb_224xlarge_HASH = HashingUtils::HashString("u7in-32tb.224xlarge");
        static const int u7ib_12tb_224xlarge_HASH = HashingUtils::HashString("u7ib-12tb.224xlarge");
        static const int c7gn_metal_HASH = HashingUtils::HashString("c7gn.metal");
        static const int r8g_medium_HASH = HashingUtils::HashString("r8g.medium");
        static const int r8g_large_HASH = HashingUtils::HashString("r8g.large");
        static const int r8g_xlarge_HASH = HashingUtils::HashString("r8g.xlarge");
        static const int r8g_2xlarge_HASH = HashingUtils::HashString("r8g.2xlarge");
        static const int r8g_4xlarge_HASH = HashingUtils::HashString("r8g.4xlarge");
        static const int r8g_8xlarge_HASH = HashingUtils::HashString("r8g.8xlarge");
        static const int r8g_12xlarge_HASH = HashingUtils::HashString("r8g.12xlarge");
        static const int r8g_16xlarge_HASH = HashingUtils::HashString("r8g.16xlarge");
        static const int r8g_24xlarge_HASH = HashingUtils::HashString("r8g.24xlarge");
        static const int r8g_48xlarge_HASH = HashingUtils::HashString("r8g.48xlarge");
        static const int r8g_metal_24xl_HASH = HashingUtils::HashString("r8g.metal-24xl");
        static const int r8g_metal_48xl_HASH = HashingUtils::HashString("r8g.metal-48xl");
        static const int mac2_m1ultra_metal_HASH = HashingUtils::HashString("mac2-m1ultra.metal");
        static const int g6e_xlarge_HASH = HashingUtils::HashString("g6e.xlarge");
        static const int g6e_2xlarge_HASH = HashingUtils::HashString("g6e.2xlarge");
        static const int g6e_4xlarge_HASH = HashingUtils::HashString("g6e.4xlarge");
        static const int g6e_8xlarge_HASH = HashingUtils::HashString("g6e.8xlarge");
        static const int g6e_12xlarge_HASH = HashingUtils::HashString("g6e.12xlarge");
        static const int g6e_16xlarge_HASH = HashingUtils::HashString("g6e.16xlarge");
        static const int g6e_24xlarge_HASH = HashingUtils::HashString("g6e.24xlarge");
        static const int g6e_48xlarge_HASH = HashingUtils::HashString("g6e.48xlarge");
        static const int c8g_medium_HASH = HashingUtils::HashString("c8g.medium");
        static const int c8g_large_HASH = HashingUtils::HashString("c8g.large");
        static const int c8g_xlarge_HASH = HashingUtils::HashString("c8g.xlarge");
        static const int c8g_2xlarge_HASH = HashingUtils::HashString("c8g.2xlarge");
        static const int c8g_4xlarge_HASH = HashingUtils::HashString("c8g.4xlarge");
        static const int c8g_8xlarge_HASH = HashingUtils::HashString("c8g.8xlarge");
        static const int c8g_12xlarge_HASH = HashingUtils::HashString("c8g.12xlarge");
        static const int c8g_16xlarge_HASH = HashingUtils::HashString("c8g.16xlarge");
        static const int c8g_24xlarge_HASH = HashingUtils::HashString("c8g.24xlarge");
        static const int c8g_48xlarge_HASH = HashingUtils::HashString("c8g.48xlarge");
        static const int c8g_metal_24xl_HASH = HashingUtils::HashString("c8g.metal-24xl");
        static const int c8g_metal_48xl_HASH = HashingUtils::HashString("c8g.metal-48xl");
        static const int m8g_medium_HASH = HashingUtils::HashString("m8g.medium");
        static const int m8g_large_HASH = HashingUtils::HashString("m8g.large");
        static const int m8g_xlarge_HASH = HashingUtils::HashString("m8g.xlarge");
        static const int m8g_2xlarge_HASH = HashingUtils::HashString("m8g.2xlarge");
        static const int m8g_4xlarge_HASH = HashingUtils::HashString("m8g.4xlarge");
        static const int m8g_8xlarge_HASH = HashingUtils::HashString("m8g.8xlarge");
        static const int m8g_12xlarge_HASH = HashingUtils::HashString("m8g.12xlarge");
        static const int m8g_16xlarge_HASH = HashingUtils::HashString("m8g.16xlarge");
        static const int m8g_24xlarge_HASH = HashingUtils::HashString("m8g.24xlarge");
        static const int m8g_48xlarge_HASH = HashingUtils::HashString("m8g.48xlarge");
        static const int m8g_metal_24xl_HASH = HashingUtils::HashString("m8g.metal-24xl");
        static const int m8g_metal_48xl_HASH = HashingUtils::HashString("m8g.metal-48xl");
        static const int x8g_medium_HASH = HashingUtils::HashString("x8g.medium");
        static const int x8g_large_HASH = HashingUtils::HashString("x8g.large");
        static const int x8g_xlarge_HASH = HashingUtils::HashString("x8g.xlarge");
        static const int x8g_2xlarge_HASH = HashingUtils::HashString("x8g.2xlarge");
        static const int x8g_4xlarge_HASH = HashingUtils::HashString("x8g.4xlarge");
        static const int x8g_8xlarge_HASH = HashingUtils::HashString("x8g.8xlarge");
        static const int x8g_12xlarge_HASH = HashingUtils::HashString("x8g.12xlarge");
        static const int x8g_16xlarge_HASH = HashingUtils::HashString("x8g.16xlarge");
        static const int x8g_24xlarge_HASH = HashingUtils::HashString("x8g.24xlarge");
        static const int x8g_48xlarge_HASH = HashingUtils::HashString("x8g.48xlarge");
        static const int x8g_metal_24xl_HASH = HashingUtils::HashString("x8g.metal-24xl");
        static const int x8g_metal_48xl_HASH = HashingUtils::HashString("x8g.metal-48xl");
        static const int i7ie_large_HASH = HashingUtils::HashString("i7ie.large");
        static const int i7ie_xlarge_HASH = HashingUtils::HashString("i7ie.xlarge");
        static const int i7ie_2xlarge_HASH = HashingUtils::HashString("i7ie.2xlarge");
        static const int i7ie_3xlarge_HASH = HashingUtils::HashString("i7ie.3xlarge");
        static const int i7ie_6xlarge_HASH = HashingUtils::HashString("i7ie.6xlarge");
        static const int i7ie_12xlarge_HASH = HashingUtils::HashString("i7ie.12xlarge");
        static const int i7ie_18xlarge_HASH = HashingUtils::HashString("i7ie.18xlarge");
        static const int i7ie_24xlarge_HASH = HashingUtils::HashString("i7ie.24xlarge");
        static const int i7ie_48xlarge_HASH = HashingUtils::HashString("i7ie.48xlarge");
        static const int i8g_large_HASH = HashingUtils::HashString("i8g.large");
        static const int i8g_xlarge_HASH = HashingUtils::HashString("i8g.xlarge");
        static const int i8g_2xlarge_HASH = HashingUtils::HashString("i8g.2xlarge");
        static const int i8g_4xlarge_HASH = HashingUtils::HashString("i8g.4xlarge");
        static const int i8g_8xlarge_HASH = HashingUtils::HashString("i8g.8xlarge");
        static const int i8g_12xlarge_HASH = HashingUtils::HashString("i8g.12xlarge");
        static const int i8g_16xlarge_HASH = HashingUtils::HashString("i8g.16xlarge");
        static const int i8g_24xlarge_HASH = HashingUtils::HashString("i8g.24xlarge");
        static const int i8g_metal_24xl_HASH = HashingUtils::HashString("i8g.metal-24xl");
        static const int u7i_6tb_112xlarge_HASH = HashingUtils::HashString("u7i-6tb.112xlarge");
        static const int u7i_8tb_112xlarge_HASH = HashingUtils::HashString("u7i-8tb.112xlarge");
        static const int u7inh_32tb_480xlarge_HASH = HashingUtils::HashString("u7inh-32tb.480xlarge");
        static const int p5e_48xlarge_HASH = HashingUtils::HashString("p5e.48xlarge");
        static const int p5en_48xlarge_HASH = HashingUtils::HashString("p5en.48xlarge");
        static const int f2_12xlarge_HASH = HashingUtils::HashString("f2.12xlarge");
        static const int f2_48xlarge_HASH = HashingUtils::HashString("f2.48xlarge");
        static const int trn2_48xlarge_HASH = HashingUtils::HashString("trn2.48xlarge");
        static const int c7i_flex_12xlarge_HASH = HashingUtils::HashString("c7i-flex.12xlarge");
        static const int c7i_flex_16xlarge_HASH = HashingUtils::HashString("c7i-flex.16xlarge");
        static const int m7i_flex_12xlarge_HASH = HashingUtils::HashString("m7i-flex.12xlarge");
        static const int m7i_flex_16xlarge_HASH = HashingUtils::HashString("m7i-flex.16xlarge");
        static const int i7ie_metal_24xl_HASH = HashingUtils::HashString("i7ie.metal-24xl");
        static const int i7ie_metal_48xl_HASH = HashingUtils::HashString("i7ie.metal-48xl");
        static const int i8g_48xlarge_HASH = HashingUtils::HashString("i8g.48xlarge");
        static const int c8gd_medium_HASH = HashingUtils::HashString("c8gd.medium");
        static const int c8gd_large_HASH = HashingUtils::HashString("c8gd.large");
        static const int c8gd_xlarge_HASH = HashingUtils::HashString("c8gd.xlarge");
        static const int c8gd_2xlarge_HASH = HashingUtils::HashString("c8gd.2xlarge");
        static const int c8gd_4xlarge_HASH = HashingUtils::HashString("c8gd.4xlarge");
        static const int c8gd_8xlarge_HASH = HashingUtils::HashString("c8gd.8xlarge");
        static const int c8gd_12xlarge_HASH = HashingUtils::HashString("c8gd.12xlarge");
        static const int c8gd_16xlarge_HASH = HashingUtils::HashString("c8gd.16xlarge");
        static const int c8gd_24xlarge_HASH = HashingUtils::HashString("c8gd.24xlarge");
        static const int c8gd_48xlarge_HASH = HashingUtils::HashString("c8gd.48xlarge");
        static const int c8gd_metal_24xl_HASH = HashingUtils::HashString("c8gd.metal-24xl");
        static const int c8gd_metal_48xl_HASH = HashingUtils::HashString("c8gd.metal-48xl");
        static const int i7i_large_HASH = HashingUtils::HashString("i7i.large");
        static const int i7i_xlarge_HASH = HashingUtils::HashString("i7i.xlarge");
        static const int i7i_2xlarge_HASH = HashingUtils::HashString("i7i.2xlarge");
        static const int i7i_4xlarge_HASH = HashingUtils::HashString("i7i.4xlarge");
        static const int i7i_8xlarge_HASH = HashingUtils::HashString("i7i.8xlarge");
        static const int i7i_12xlarge_HASH = HashingUtils::HashString("i7i.12xlarge");
        static const int i7i_16xlarge_HASH = HashingUtils::HashString("i7i.16xlarge");
        static const int i7i_24xlarge_HASH = HashingUtils::HashString("i7i.24xlarge");
        static const int i7i_48xlarge_HASH = HashingUtils::HashString("i7i.48xlarge");
        static const int i7i_metal_24xl_HASH = HashingUtils::HashString("i7i.metal-24xl");
        static const int i7i_metal_48xl_HASH = HashingUtils::HashString("i7i.metal-48xl");
        static const int p6_b200_48xlarge_HASH = HashingUtils::HashString("p6-b200.48xlarge");
        static const int m8gd_medium_HASH = HashingUtils::HashString("m8gd.medium");
        static const int m8gd_large_HASH = HashingUtils::HashString("m8gd.large");
        static const int m8gd_xlarge_HASH = HashingUtils::HashString("m8gd.xlarge");
        static const int m8gd_2xlarge_HASH = HashingUtils::HashString("m8gd.2xlarge");
        static const int m8gd_4xlarge_HASH = HashingUtils::HashString("m8gd.4xlarge");
        static const int m8gd_8xlarge_HASH = HashingUtils::HashString("m8gd.8xlarge");
        static const int m8gd_12xlarge_HASH = HashingUtils::HashString("m8gd.12xlarge");
        static const int m8gd_16xlarge_HASH = HashingUtils::HashString("m8gd.16xlarge");
        static const int m8gd_24xlarge_HASH = HashingUtils::HashString("m8gd.24xlarge");
        static const int m8gd_48xlarge_HASH = HashingUtils::HashString("m8gd.48xlarge");
        static const int m8gd_metal_24xl_HASH = HashingUtils::HashString("m8gd.metal-24xl");
        static const int m8gd_metal_48xl_HASH = HashingUtils::HashString("m8gd.metal-48xl");
        static const int r8gd_medium_HASH = HashingUtils::HashString("r8gd.medium");
        static const int r8gd_large_HASH = HashingUtils::HashString("r8gd.large");
        static const int r8gd_xlarge_HASH = HashingUtils::HashString("r8gd.xlarge");
        static const int r8gd_2xlarge_HASH = HashingUtils::HashString("r8gd.2xlarge");
        static const int r8gd_4xlarge_HASH = HashingUtils::HashString("r8gd.4xlarge");
        static const int r8gd_8xlarge_HASH = HashingUtils::HashString("r8gd.8xlarge");
        static const int r8gd_12xlarge_HASH = HashingUtils::HashString("r8gd.12xlarge");
        static const int r8gd_16xlarge_HASH = HashingUtils::HashString("r8gd.16xlarge");
        static const int r8gd_24xlarge_HASH = HashingUtils::HashString("r8gd.24xlarge");
        static const int r8gd_48xlarge_HASH = HashingUtils::HashString("r8gd.48xlarge");
        static const int r8gd_metal_24xl_HASH = HashingUtils::HashString("r8gd.metal-24xl");
        static const int r8gd_metal_48xl_HASH = HashingUtils::HashString("r8gd.metal-48xl");
        static const int c8gn_medium_HASH = HashingUtils::HashString("c8gn.medium");
        static const int c8gn_large_HASH = HashingUtils::HashString("c8gn.large");
        static const int c8gn_xlarge_HASH = HashingUtils::HashString("c8gn.xlarge");
        static const int c8gn_2xlarge_HASH = HashingUtils::HashString("c8gn.2xlarge");
        static const int c8gn_4xlarge_HASH = HashingUtils::HashString("c8gn.4xlarge");
        static const int c8gn_8xlarge_HASH = HashingUtils::HashString("c8gn.8xlarge");
        static const int c8gn_12xlarge_HASH = HashingUtils::HashString("c8gn.12xlarge");
        static const int c8gn_16xlarge_HASH = HashingUtils::HashString("c8gn.16xlarge");
        static const int c8gn_24xlarge_HASH = HashingUtils::HashString("c8gn.24xlarge");
        static const int c8gn_48xlarge_HASH = HashingUtils::HashString("c8gn.48xlarge");
        static const int c8gn_metal_24xl_HASH = HashingUtils::HashString("c8gn.metal-24xl");
        static const int c8gn_metal_48xl_HASH = HashingUtils::HashString("c8gn.metal-48xl");
        static const int f2_6xlarge_HASH = HashingUtils::HashString("f2.6xlarge");
        static const int p6e_gb200_36xlarge_HASH = HashingUtils::HashString("p6e-gb200.36xlarge");

        /*
        The if-else chains in this file are converted into a jump table by the compiler,
        which allows constant time lookup. The chain has been broken into helper functions
        because MSVC has a maximum of 122 chained if-else blocks.
        */
        static bool GetEnumForNameHelper0(int hashCode, InstanceType& enumValue)
        {
          if (hashCode == a1_medium_HASH)
          {
            enumValue = InstanceType::a1_medium;
            return true;
          }
          else if (hashCode == a1_large_HASH)
          {
            enumValue = InstanceType::a1_large;
            return true;
          }
          else if (hashCode == a1_xlarge_HASH)
          {
            enumValue = InstanceType::a1_xlarge;
            return true;
          }
          else if (hashCode == a1_2xlarge_HASH)
          {
            enumValue = InstanceType::a1_2xlarge;
            return true;
          }
          else if (hashCode == a1_4xlarge_HASH)
          {
            enumValue = InstanceType::a1_4xlarge;
            return true;
          }
          else if (hashCode == a1_metal_HASH)
          {
            enumValue = InstanceType::a1_metal;
            return true;
          }
          else if (hashCode == c1_medium_HASH)
          {
            enumValue = InstanceType::c1_medium;
            return true;
          }
          else if (hashCode == c1_xlarge_HASH)
          {
            enumValue = InstanceType::c1_xlarge;
            return true;
          }
          else if (hashCode == c3_large_HASH)
          {
            enumValue = InstanceType::c3_large;
            return true;
          }
          else if (hashCode == c3_xlarge_HASH)
          {
            enumValue = InstanceType::c3_xlarge;
            return true;
          }
          else if (hashCode == c3_2xlarge_HASH)
          {
            enumValue = InstanceType::c3_2xlarge;
            return true;
          }
          else if (hashCode == c3_4xlarge_HASH)
          {
            enumValue = InstanceType::c3_4xlarge;
            return true;
          }
          else if (hashCode == c3_8xlarge_HASH)
          {
            enumValue = InstanceType::c3_8xlarge;
            return true;
          }
          else if (hashCode == c4_large_HASH)
          {
            enumValue = InstanceType::c4_large;
            return true;
          }
          else if (hashCode == c4_xlarge_HASH)
          {
            enumValue = InstanceType::c4_xlarge;
            return true;
          }
          else if (hashCode == c4_2xlarge_HASH)
          {
            enumValue = InstanceType::c4_2xlarge;
            return true;
          }
          else if (hashCode == c4_4xlarge_HASH)
          {
            enumValue = InstanceType::c4_4xlarge;
            return true;
          }
          else if (hashCode == c4_8xlarge_HASH)
          {
            enumValue = InstanceType::c4_8xlarge;
            return true;
          }
          else if (hashCode == c5_large_HASH)
          {
            enumValue = InstanceType::c5_large;
            return true;
          }
          else if (hashCode == c5_xlarge_HASH)
          {
            enumValue = InstanceType::c5_xlarge;
            return true;
          }
          else if (hashCode == c5_2xlarge_HASH)
          {
            enumValue = InstanceType::c5_2xlarge;
            return true;
          }
          else if (hashCode == c5_4xlarge_HASH)
          {
            enumValue = InstanceType::c5_4xlarge;
            return true;
          }
          else if (hashCode == c5_9xlarge_HASH)
          {
            enumValue = InstanceType::c5_9xlarge;
            return true;
          }
          else if (hashCode == c5_12xlarge_HASH)
          {
            enumValue = InstanceType::c5_12xlarge;
            return true;
          }
          else if (hashCode == c5_18xlarge_HASH)
          {
            enumValue = InstanceType::c5_18xlarge;
            return true;
          }
          else if (hashCode == c5_24xlarge_HASH)
          {
            enumValue = InstanceType::c5_24xlarge;
            return true;
          }
          else if (hashCode == c5_metal_HASH)
          {
            enumValue = InstanceType::c5_metal;
            return true;
          }
          else if (hashCode == c5a_large_HASH)
          {
            enumValue = InstanceType::c5a_large;
            return true;
          }
          else if (hashCode == c5a_xlarge_HASH)
          {
            enumValue = InstanceType::c5a_xlarge;
            return true;
          }
          else if (hashCode == c5a_2xlarge_HASH)
          {
            enumValue = InstanceType::c5a_2xlarge;
            return true;
          }
          else if (hashCode == c5a_4xlarge_HASH)
          {
            enumValue = InstanceType::c5a_4xlarge;
            return true;
          }
          else if (hashCode == c5a_8xlarge_HASH)
          {
            enumValue = InstanceType::c5a_8xlarge;
            return true;
          }
          else if (hashCode == c5a_12xlarge_HASH)
          {
            enumValue = InstanceType::c5a_12xlarge;
            return true;
          }
          else if (hashCode == c5a_16xlarge_HASH)
          {
            enumValue = InstanceType::c5a_16xlarge;
            return true;
          }
          else if (hashCode == c5a_24xlarge_HASH)
          {
            enumValue = InstanceType::c5a_24xlarge;
            return true;
          }
          else if (hashCode == c5ad_large_HASH)
          {
            enumValue = InstanceType::c5ad_large;
            return true;
          }
          else if (hashCode == c5ad_xlarge_HASH)
          {
            enumValue = InstanceType::c5ad_xlarge;
            return true;
          }
          else if (hashCode == c5ad_2xlarge_HASH)
          {
            enumValue = InstanceType::c5ad_2xlarge;
            return true;
          }
          else if (hashCode == c5ad_4xlarge_HASH)
          {
            enumValue = InstanceType::c5ad_4xlarge;
            return true;
          }
          else if (hashCode == c5ad_8xlarge_HASH)
          {
            enumValue = InstanceType::c5ad_8xlarge;
            return true;
          }
          else if (hashCode == c5ad_12xlarge_HASH)
          {
            enumValue = InstanceType::c5ad_12xlarge;
            return true;
          }
          else if (hashCode == c5ad_16xlarge_HASH)
          {
            enumValue = InstanceType::c5ad_16xlarge;
            return true;
          }
          else if (hashCode == c5ad_24xlarge_HASH)
          {
            enumValue = InstanceType::c5ad_24xlarge;
            return true;
          }
          else if (hashCode == c5d_large_HASH)
          {
            enumValue = InstanceType::c5d_large;
            return true;
          }
          else if (hashCode == c5d_xlarge_HASH)
          {
            enumValue = InstanceType::c5d_xlarge;
            return true;
          }
          else if (hashCode == c5d_2xlarge_HASH)
          {
            enumValue = InstanceType::c5d_2xlarge;
            return true;
          }
          else if (hashCode == c5d_4xlarge_HASH)
          {
            enumValue = InstanceType::c5d_4xlarge;
            return true;
          }
          else if (hashCode == c5d_9xlarge_HASH)
          {
            enumValue = InstanceType::c5d_9xlarge;
            return true;
          }
          else if (hashCode == c5d_12xlarge_HASH)
          {
            enumValue = InstanceType::c5d_12xlarge;
            return true;
          }
          else if (hashCode == c5d_18xlarge_HASH)
          {
            enumValue = InstanceType::c5d_18xlarge;
            return true;
          }
          else if (hashCode == c5d_24xlarge_HASH)
          {
            enumValue = InstanceType::c5d_24xlarge;
            return true;
          }
          else if (hashCode == c5d_metal_HASH)
          {
            enumValue = InstanceType::c5d_metal;
            return true;
          }
          else if (hashCode == c5n_large_HASH)
          {
            enumValue = InstanceType::c5n_large;
            return true;
          }
          else if (hashCode == c5n_xlarge_HASH)
          {
            enumValue = InstanceType::c5n_xlarge;
            return true;
          }
          else if (hashCode == c5n_2xlarge_HASH)
          {
            enumValue = InstanceType::c5n_2xlarge;
            return true;
          }
          else if (hashCode == c5n_4xlarge_HASH)
          {
            enumValue = InstanceType::c5n_4xlarge;
            return true;
          }
          else if (hashCode == c5n_9xlarge_HASH)
          {
            enumValue = InstanceType::c5n_9xlarge;
            return true;
          }
          else if (hashCode == c5n_18xlarge_HASH)
          {
            enumValue = InstanceType::c5n_18xlarge;
            return true;
          }
          else if (hashCode == c5n_metal_HASH)
          {
            enumValue = InstanceType::c5n_metal;
            return true;
          }
          else if (hashCode == c6g_medium_HASH)
          {
            enumValue = InstanceType::c6g_medium;
            return true;
          }
          else if (hashCode == c6g_large_HASH)
          {
            enumValue = InstanceType::c6g_large;
            return true;
          }
          else if (hashCode == c6g_xlarge_HASH)
          {
            enumValue = InstanceType::c6g_xlarge;
            return true;
          }
          else if (hashCode == c6g_2xlarge_HASH)
          {
            enumValue = InstanceType::c6g_2xlarge;
            return true;
          }
          else if (hashCode == c6g_4xlarge_HASH)
          {
            enumValue = InstanceType::c6g_4xlarge;
            return true;
          }
          else if (hashCode == c6g_8xlarge_HASH)
          {
            enumValue = InstanceType::c6g_8xlarge;
            return true;
          }
          else if (hashCode == c6g_12xlarge_HASH)
          {
            enumValue = InstanceType::c6g_12xlarge;
            return true;
          }
          else if (hashCode == c6g_16xlarge_HASH)
          {
            enumValue = InstanceType::c6g_16xlarge;
            return true;
          }
          else if (hashCode == c6g_metal_HASH)
          {
            enumValue = InstanceType::c6g_metal;
            return true;
          }
          else if (hashCode == c6gd_medium_HASH)
          {
            enumValue = InstanceType::c6gd_medium;
            return true;
          }
          else if (hashCode == c6gd_large_HASH)
          {
            enumValue = InstanceType::c6gd_large;
            return true;
          }
          else if (hashCode == c6gd_xlarge_HASH)
          {
            enumValue = InstanceType::c6gd_xlarge;
            return true;
          }
          else if (hashCode == c6gd_2xlarge_HASH)
          {
            enumValue = InstanceType::c6gd_2xlarge;
            return true;
          }
          else if (hashCode == c6gd_4xlarge_HASH)
          {
            enumValue = InstanceType::c6gd_4xlarge;
            return true;
          }
          else if (hashCode == c6gd_8xlarge_HASH)
          {
            enumValue = InstanceType::c6gd_8xlarge;
            return true;
          }
          else if (hashCode == c6gd_12xlarge_HASH)
          {
            enumValue = InstanceType::c6gd_12xlarge;
            return true;
          }
          else if (hashCode == c6gd_16xlarge_HASH)
          {
            enumValue = InstanceType::c6gd_16xlarge;
            return true;
          }
          else if (hashCode == c6gd_metal_HASH)
          {
            enumValue = InstanceType::c6gd_metal;
            return true;
          }
          else if (hashCode == c6gn_medium_HASH)
          {
            enumValue = InstanceType::c6gn_medium;
            return true;
          }
          else if (hashCode == c6gn_large_HASH)
          {
            enumValue = InstanceType::c6gn_large;
            return true;
          }
          else if (hashCode == c6gn_xlarge_HASH)
          {
            enumValue = InstanceType::c6gn_xlarge;
            return true;
          }
          else if (hashCode == c6gn_2xlarge_HASH)
          {
            enumValue = InstanceType::c6gn_2xlarge;
            return true;
          }
          else if (hashCode == c6gn_4xlarge_HASH)
          {
            enumValue = InstanceType::c6gn_4xlarge;
            return true;
          }
          else if (hashCode == c6gn_8xlarge_HASH)
          {
            enumValue = InstanceType::c6gn_8xlarge;
            return true;
          }
          else if (hashCode == c6gn_12xlarge_HASH)
          {
            enumValue = InstanceType::c6gn_12xlarge;
            return true;
          }
          else if (hashCode == c6gn_16xlarge_HASH)
          {
            enumValue = InstanceType::c6gn_16xlarge;
            return true;
          }
          else if (hashCode == c6i_large_HASH)
          {
            enumValue = InstanceType::c6i_large;
            return true;
          }
          else if (hashCode == c6i_xlarge_HASH)
          {
            enumValue = InstanceType::c6i_xlarge;
            return true;
          }
          else if (hashCode == c6i_2xlarge_HASH)
          {
            enumValue = InstanceType::c6i_2xlarge;
            return true;
          }
          else if (hashCode == c6i_4xlarge_HASH)
          {
            enumValue = InstanceType::c6i_4xlarge;
            return true;
          }
          else if (hashCode == c6i_8xlarge_HASH)
          {
            enumValue = InstanceType::c6i_8xlarge;
            return true;
          }
          else if (hashCode == c6i_12xlarge_HASH)
          {
            enumValue = InstanceType::c6i_12xlarge;
            return true;
          }
          else if (hashCode == c6i_16xlarge_HASH)
          {
            enumValue = InstanceType::c6i_16xlarge;
            return true;
          }
          else if (hashCode == c6i_24xlarge_HASH)
          {
            enumValue = InstanceType::c6i_24xlarge;
            return true;
          }
          else if (hashCode == c6i_32xlarge_HASH)
          {
            enumValue = InstanceType::c6i_32xlarge;
            return true;
          }
          else if (hashCode == c6i_metal_HASH)
          {
            enumValue = InstanceType::c6i_metal;
            return true;
          }
          else if (hashCode == cc1_4xlarge_HASH)
          {
            enumValue = InstanceType::cc1_4xlarge;
            return true;
          }
          else if (hashCode == cc2_8xlarge_HASH)
          {
            enumValue = InstanceType::cc2_8xlarge;
            return true;
          }
          else if (hashCode == cg1_4xlarge_HASH)
          {
            enumValue = InstanceType::cg1_4xlarge;
            return true;
          }
          else if (hashCode == cr1_8xlarge_HASH)
          {
            enumValue = InstanceType::cr1_8xlarge;
            return true;
          }
          else if (hashCode == d2_xlarge_HASH)
          {
            enumValue = InstanceType::d2_xlarge;
            return true;
          }
          else if (hashCode == d2_2xlarge_HASH)
          {
            enumValue = InstanceType::d2_2xlarge;
            return true;
          }
          else if (hashCode == d2_4xlarge_HASH)
          {
            enumValue = InstanceType::d2_4xlarge;
            return true;
          }
          else if (hashCode == d2_8xlarge_HASH)
          {
            enumValue = InstanceType::d2_8xlarge;
            return true;
          }
          else if (hashCode == d3_xlarge_HASH)
          {
            enumValue = InstanceType::d3_xlarge;
            return true;
          }
          else if (hashCode == d3_2xlarge_HASH)
          {
            enumValue = InstanceType::d3_2xlarge;
            return true;
          }
          else if (hashCode == d3_4xlarge_HASH)
          {
            enumValue = InstanceType::d3_4xlarge;
            return true;
          }
          else if (hashCode == d3_8xlarge_HASH)
          {
            enumValue = InstanceType::d3_8xlarge;
            return true;
          }
          else if (hashCode == d3en_xlarge_HASH)
          {
            enumValue = InstanceType::d3en_xlarge;
            return true;
          }
          else if (hashCode == d3en_2xlarge_HASH)
          {
            enumValue = InstanceType::d3en_2xlarge;
            return true;
          }
          else if (hashCode == d3en_4xlarge_HASH)
          {
            enumValue = InstanceType::d3en_4xlarge;
            return true;
          }
          else if (hashCode == d3en_6xlarge_HASH)
          {
            enumValue = InstanceType::d3en_6xlarge;
            return true;
          }
          else if (hashCode == d3en_8xlarge_HASH)
          {
            enumValue = InstanceType::d3en_8xlarge;
            return true;
          }
          else if (hashCode == d3en_12xlarge_HASH)
          {
            enumValue = InstanceType::d3en_12xlarge;
            return true;
          }
          else if (hashCode == dl1_24xlarge_HASH)
          {
            enumValue = InstanceType::dl1_24xlarge;
            return true;
          }
          else if (hashCode == f1_2xlarge_HASH)
          {
            enumValue = InstanceType::f1_2xlarge;
            return true;
          }
          else if (hashCode == f1_4xlarge_HASH)
          {
            enumValue = InstanceType::f1_4xlarge;
            return true;
          }
          else if (hashCode == f1_16xlarge_HASH)
          {
            enumValue = InstanceType::f1_16xlarge;
            return true;
          }
          else if (hashCode == g2_2xlarge_HASH)
          {
            enumValue = InstanceType::g2_2xlarge;
            return true;
          }
          else if (hashCode == g2_8xlarge_HASH)
          {
            enumValue = InstanceType::g2_8xlarge;
            return true;
          }
          else if (hashCode == g3_4xlarge_HASH)
          {
            enumValue = InstanceType::g3_4xlarge;
            return true;
          }
          else if (hashCode == g3_8xlarge_HASH)
          {
            enumValue = InstanceType::g3_8xlarge;
            return true;
          }
          else if (hashCode == g3_16xlarge_HASH)
          {
            enumValue = InstanceType::g3_16xlarge;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper1(int hashCode, InstanceType& enumValue)
        {
          if (hashCode == g3s_xlarge_HASH)
          {
            enumValue = InstanceType::g3s_xlarge;
            return true;
          }
          else if (hashCode == g4ad_xlarge_HASH)
          {
            enumValue = InstanceType::g4ad_xlarge;
            return true;
          }
          else if (hashCode == g4ad_2xlarge_HASH)
          {
            enumValue = InstanceType::g4ad_2xlarge;
            return true;
          }
          else if (hashCode == g4ad_4xlarge_HASH)
          {
            enumValue = InstanceType::g4ad_4xlarge;
            return true;
          }
          else if (hashCode == g4ad_8xlarge_HASH)
          {
            enumValue = InstanceType::g4ad_8xlarge;
            return true;
          }
          else if (hashCode == g4ad_16xlarge_HASH)
          {
            enumValue = InstanceType::g4ad_16xlarge;
            return true;
          }
          else if (hashCode == g4dn_xlarge_HASH)
          {
            enumValue = InstanceType::g4dn_xlarge;
            return true;
          }
          else if (hashCode == g4dn_2xlarge_HASH)
          {
            enumValue = InstanceType::g4dn_2xlarge;
            return true;
          }
          else if (hashCode == g4dn_4xlarge_HASH)
          {
            enumValue = InstanceType::g4dn_4xlarge;
            return true;
          }
          else if (hashCode == g4dn_8xlarge_HASH)
          {
            enumValue = InstanceType::g4dn_8xlarge;
            return true;
          }
          else if (hashCode == g4dn_12xlarge_HASH)
          {
            enumValue = InstanceType::g4dn_12xlarge;
            return true;
          }
          else if (hashCode == g4dn_16xlarge_HASH)
          {
            enumValue = InstanceType::g4dn_16xlarge;
            return true;
          }
          else if (hashCode == g4dn_metal_HASH)
          {
            enumValue = InstanceType::g4dn_metal;
            return true;
          }
          else if (hashCode == g5_xlarge_HASH)
          {
            enumValue = InstanceType::g5_xlarge;
            return true;
          }
          else if (hashCode == g5_2xlarge_HASH)
          {
            enumValue = InstanceType::g5_2xlarge;
            return true;
          }
          else if (hashCode == g5_4xlarge_HASH)
          {
            enumValue = InstanceType::g5_4xlarge;
            return true;
          }
          else if (hashCode == g5_8xlarge_HASH)
          {
            enumValue = InstanceType::g5_8xlarge;
            return true;
          }
          else if (hashCode == g5_12xlarge_HASH)
          {
            enumValue = InstanceType::g5_12xlarge;
            return true;
          }
          else if (hashCode == g5_16xlarge_HASH)
          {
            enumValue = InstanceType::g5_16xlarge;
            return true;
          }
          else if (hashCode == g5_24xlarge_HASH)
          {
            enumValue = InstanceType::g5_24xlarge;
            return true;
          }
          else if (hashCode == g5_48xlarge_HASH)
          {
            enumValue = InstanceType::g5_48xlarge;
            return true;
          }
          else if (hashCode == g5g_xlarge_HASH)
          {
            enumValue = InstanceType::g5g_xlarge;
            return true;
          }
          else if (hashCode == g5g_2xlarge_HASH)
          {
            enumValue = InstanceType::g5g_2xlarge;
            return true;
          }
          else if (hashCode == g5g_4xlarge_HASH)
          {
            enumValue = InstanceType::g5g_4xlarge;
            return true;
          }
          else if (hashCode == g5g_8xlarge_HASH)
          {
            enumValue = InstanceType::g5g_8xlarge;
            return true;
          }
          else if (hashCode == g5g_16xlarge_HASH)
          {
            enumValue = InstanceType::g5g_16xlarge;
            return true;
          }
          else if (hashCode == g5g_metal_HASH)
          {
            enumValue = InstanceType::g5g_metal;
            return true;
          }
          else if (hashCode == hi1_4xlarge_HASH)
          {
            enumValue = InstanceType::hi1_4xlarge;
            return true;
          }
          else if (hashCode == hpc6a_48xlarge_HASH)
          {
            enumValue = InstanceType::hpc6a_48xlarge;
            return true;
          }
          else if (hashCode == hs1_8xlarge_HASH)
          {
            enumValue = InstanceType::hs1_8xlarge;
            return true;
          }
          else if (hashCode == h1_2xlarge_HASH)
          {
            enumValue = InstanceType::h1_2xlarge;
            return true;
          }
          else if (hashCode == h1_4xlarge_HASH)
          {
            enumValue = InstanceType::h1_4xlarge;
            return true;
          }
          else if (hashCode == h1_8xlarge_HASH)
          {
            enumValue = InstanceType::h1_8xlarge;
            return true;
          }
          else if (hashCode == h1_16xlarge_HASH)
          {
            enumValue = InstanceType::h1_16xlarge;
            return true;
          }
          else if (hashCode == i2_xlarge_HASH)
          {
            enumValue = InstanceType::i2_xlarge;
            return true;
          }
          else if (hashCode == i2_2xlarge_HASH)
          {
            enumValue = InstanceType::i2_2xlarge;
            return true;
          }
          else if (hashCode == i2_4xlarge_HASH)
          {
            enumValue = InstanceType::i2_4xlarge;
            return true;
          }
          else if (hashCode == i2_8xlarge_HASH)
          {
            enumValue = InstanceType::i2_8xlarge;
            return true;
          }
          else if (hashCode == i3_large_HASH)
          {
            enumValue = InstanceType::i3_large;
            return true;
          }
          else if (hashCode == i3_xlarge_HASH)
          {
            enumValue = InstanceType::i3_xlarge;
            return true;
          }
          else if (hashCode == i3_2xlarge_HASH)
          {
            enumValue = InstanceType::i3_2xlarge;
            return true;
          }
          else if (hashCode == i3_4xlarge_HASH)
          {
            enumValue = InstanceType::i3_4xlarge;
            return true;
          }
          else if (hashCode == i3_8xlarge_HASH)
          {
            enumValue = InstanceType::i3_8xlarge;
            return true;
          }
          else if (hashCode == i3_16xlarge_HASH)
          {
            enumValue = InstanceType::i3_16xlarge;
            return true;
          }
          else if (hashCode == i3_metal_HASH)
          {
            enumValue = InstanceType::i3_metal;
            return true;
          }
          else if (hashCode == i3en_large_HASH)
          {
            enumValue = InstanceType::i3en_large;
            return true;
          }
          else if (hashCode == i3en_xlarge_HASH)
          {
            enumValue = InstanceType::i3en_xlarge;
            return true;
          }
          else if (hashCode == i3en_2xlarge_HASH)
          {
            enumValue = InstanceType::i3en_2xlarge;
            return true;
          }
          else if (hashCode == i3en_3xlarge_HASH)
          {
            enumValue = InstanceType::i3en_3xlarge;
            return true;
          }
          else if (hashCode == i3en_6xlarge_HASH)
          {
            enumValue = InstanceType::i3en_6xlarge;
            return true;
          }
          else if (hashCode == i3en_12xlarge_HASH)
          {
            enumValue = InstanceType::i3en_12xlarge;
            return true;
          }
          else if (hashCode == i3en_24xlarge_HASH)
          {
            enumValue = InstanceType::i3en_24xlarge;
            return true;
          }
          else if (hashCode == i3en_metal_HASH)
          {
            enumValue = InstanceType::i3en_metal;
            return true;
          }
          else if (hashCode == im4gn_large_HASH)
          {
            enumValue = InstanceType::im4gn_large;
            return true;
          }
          else if (hashCode == im4gn_xlarge_HASH)
          {
            enumValue = InstanceType::im4gn_xlarge;
            return true;
          }
          else if (hashCode == im4gn_2xlarge_HASH)
          {
            enumValue = InstanceType::im4gn_2xlarge;
            return true;
          }
          else if (hashCode == im4gn_4xlarge_HASH)
          {
            enumValue = InstanceType::im4gn_4xlarge;
            return true;
          }
          else if (hashCode == im4gn_8xlarge_HASH)
          {
            enumValue = InstanceType::im4gn_8xlarge;
            return true;
          }
          else if (hashCode == im4gn_16xlarge_HASH)
          {
            enumValue = InstanceType::im4gn_16xlarge;
            return true;
          }
          else if (hashCode == inf1_xlarge_HASH)
          {
            enumValue = InstanceType::inf1_xlarge;
            return true;
          }
          else if (hashCode == inf1_2xlarge_HASH)
          {
            enumValue = InstanceType::inf1_2xlarge;
            return true;
          }
          else if (hashCode == inf1_6xlarge_HASH)
          {
            enumValue = InstanceType::inf1_6xlarge;
            return true;
          }
          else if (hashCode == inf1_24xlarge_HASH)
          {
            enumValue = InstanceType::inf1_24xlarge;
            return true;
          }
          else if (hashCode == is4gen_medium_HASH)
          {
            enumValue = InstanceType::is4gen_medium;
            return true;
          }
          else if (hashCode == is4gen_large_HASH)
          {
            enumValue = InstanceType::is4gen_large;
            return true;
          }
          else if (hashCode == is4gen_xlarge_HASH)
          {
            enumValue = InstanceType::is4gen_xlarge;
            return true;
          }
          else if (hashCode == is4gen_2xlarge_HASH)
          {
            enumValue = InstanceType::is4gen_2xlarge;
            return true;
          }
          else if (hashCode == is4gen_4xlarge_HASH)
          {
            enumValue = InstanceType::is4gen_4xlarge;
            return true;
          }
          else if (hashCode == is4gen_8xlarge_HASH)
          {
            enumValue = InstanceType::is4gen_8xlarge;
            return true;
          }
          else if (hashCode == m1_small_HASH)
          {
            enumValue = InstanceType::m1_small;
            return true;
          }
          else if (hashCode == m1_medium_HASH)
          {
            enumValue = InstanceType::m1_medium;
            return true;
          }
          else if (hashCode == m1_large_HASH)
          {
            enumValue = InstanceType::m1_large;
            return true;
          }
          else if (hashCode == m1_xlarge_HASH)
          {
            enumValue = InstanceType::m1_xlarge;
            return true;
          }
          else if (hashCode == m2_xlarge_HASH)
          {
            enumValue = InstanceType::m2_xlarge;
            return true;
          }
          else if (hashCode == m2_2xlarge_HASH)
          {
            enumValue = InstanceType::m2_2xlarge;
            return true;
          }
          else if (hashCode == m2_4xlarge_HASH)
          {
            enumValue = InstanceType::m2_4xlarge;
            return true;
          }
          else if (hashCode == m3_medium_HASH)
          {
            enumValue = InstanceType::m3_medium;
            return true;
          }
          else if (hashCode == m3_large_HASH)
          {
            enumValue = InstanceType::m3_large;
            return true;
          }
          else if (hashCode == m3_xlarge_HASH)
          {
            enumValue = InstanceType::m3_xlarge;
            return true;
          }
          else if (hashCode == m3_2xlarge_HASH)
          {
            enumValue = InstanceType::m3_2xlarge;
            return true;
          }
          else if (hashCode == m4_large_HASH)
          {
            enumValue = InstanceType::m4_large;
            return true;
          }
          else if (hashCode == m4_xlarge_HASH)
          {
            enumValue = InstanceType::m4_xlarge;
            return true;
          }
          else if (hashCode == m4_2xlarge_HASH)
          {
            enumValue = InstanceType::m4_2xlarge;
            return true;
          }
          else if (hashCode == m4_4xlarge_HASH)
          {
            enumValue = InstanceType::m4_4xlarge;
            return true;
          }
          else if (hashCode == m4_10xlarge_HASH)
          {
            enumValue = InstanceType::m4_10xlarge;
            return true;
          }
          else if (hashCode == m4_16xlarge_HASH)
          {
            enumValue = InstanceType::m4_16xlarge;
            return true;
          }
          else if (hashCode == m5_large_HASH)
          {
            enumValue = InstanceType::m5_large;
            return true;
          }
          else if (hashCode == m5_xlarge_HASH)
          {
            enumValue = InstanceType::m5_xlarge;
            return true;
          }
          else if (hashCode == m5_2xlarge_HASH)
          {
            enumValue = InstanceType::m5_2xlarge;
            return true;
          }
          else if (hashCode == m5_4xlarge_HASH)
          {
            enumValue = InstanceType::m5_4xlarge;
            return true;
          }
          else if (hashCode == m5_8xlarge_HASH)
          {
            enumValue = InstanceType::m5_8xlarge;
            return true;
          }
          else if (hashCode == m5_12xlarge_HASH)
          {
            enumValue = InstanceType::m5_12xlarge;
            return true;
          }
          else if (hashCode == m5_16xlarge_HASH)
          {
            enumValue = InstanceType::m5_16xlarge;
            return true;
          }
          else if (hashCode == m5_24xlarge_HASH)
          {
            enumValue = InstanceType::m5_24xlarge;
            return true;
          }
          else if (hashCode == m5_metal_HASH)
          {
            enumValue = InstanceType::m5_metal;
            return true;
          }
          else if (hashCode == m5a_large_HASH)
          {
            enumValue = InstanceType::m5a_large;
            return true;
          }
          else if (hashCode == m5a_xlarge_HASH)
          {
            enumValue = InstanceType::m5a_xlarge;
            return true;
          }
          else if (hashCode == m5a_2xlarge_HASH)
          {
            enumValue = InstanceType::m5a_2xlarge;
            return true;
          }
          else if (hashCode == m5a_4xlarge_HASH)
          {
            enumValue = InstanceType::m5a_4xlarge;
            return true;
          }
          else if (hashCode == m5a_8xlarge_HASH)
          {
            enumValue = InstanceType::m5a_8xlarge;
            return true;
          }
          else if (hashCode == m5a_12xlarge_HASH)
          {
            enumValue = InstanceType::m5a_12xlarge;
            return true;
          }
          else if (hashCode == m5a_16xlarge_HASH)
          {
            enumValue = InstanceType::m5a_16xlarge;
            return true;
          }
          else if (hashCode == m5a_24xlarge_HASH)
          {
            enumValue = InstanceType::m5a_24xlarge;
            return true;
          }
          else if (hashCode == m5ad_large_HASH)
          {
            enumValue = InstanceType::m5ad_large;
            return true;
          }
          else if (hashCode == m5ad_xlarge_HASH)
          {
            enumValue = InstanceType::m5ad_xlarge;
            return true;
          }
          else if (hashCode == m5ad_2xlarge_HASH)
          {
            enumValue = InstanceType::m5ad_2xlarge;
            return true;
          }
          else if (hashCode == m5ad_4xlarge_HASH)
          {
            enumValue = InstanceType::m5ad_4xlarge;
            return true;
          }
          else if (hashCode == m5ad_8xlarge_HASH)
          {
            enumValue = InstanceType::m5ad_8xlarge;
            return true;
          }
          else if (hashCode == m5ad_12xlarge_HASH)
          {
            enumValue = InstanceType::m5ad_12xlarge;
            return true;
          }
          else if (hashCode == m5ad_16xlarge_HASH)
          {
            enumValue = InstanceType::m5ad_16xlarge;
            return true;
          }
          else if (hashCode == m5ad_24xlarge_HASH)
          {
            enumValue = InstanceType::m5ad_24xlarge;
            return true;
          }
          else if (hashCode == m5d_large_HASH)
          {
            enumValue = InstanceType::m5d_large;
            return true;
          }
          else if (hashCode == m5d_xlarge_HASH)
          {
            enumValue = InstanceType::m5d_xlarge;
            return true;
          }
          else if (hashCode == m5d_2xlarge_HASH)
          {
            enumValue = InstanceType::m5d_2xlarge;
            return true;
          }
          else if (hashCode == m5d_4xlarge_HASH)
          {
            enumValue = InstanceType::m5d_4xlarge;
            return true;
          }
          else if (hashCode == m5d_8xlarge_HASH)
          {
            enumValue = InstanceType::m5d_8xlarge;
            return true;
          }
          else if (hashCode == m5d_12xlarge_HASH)
          {
            enumValue = InstanceType::m5d_12xlarge;
            return true;
          }
          else if (hashCode == m5d_16xlarge_HASH)
          {
            enumValue = InstanceType::m5d_16xlarge;
            return true;
          }
          else if (hashCode == m5d_24xlarge_HASH)
          {
            enumValue = InstanceType::m5d_24xlarge;
            return true;
          }
          else if (hashCode == m5d_metal_HASH)
          {
            enumValue = InstanceType::m5d_metal;
            return true;
          }
          else if (hashCode == m5dn_large_HASH)
          {
            enumValue = InstanceType::m5dn_large;
            return true;
          }
          else if (hashCode == m5dn_xlarge_HASH)
          {
            enumValue = InstanceType::m5dn_xlarge;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper2(int hashCode, InstanceType& enumValue)
        {
          if (hashCode == m5dn_2xlarge_HASH)
          {
            enumValue = InstanceType::m5dn_2xlarge;
            return true;
          }
          else if (hashCode == m5dn_4xlarge_HASH)
          {
            enumValue = InstanceType::m5dn_4xlarge;
            return true;
          }
          else if (hashCode == m5dn_8xlarge_HASH)
          {
            enumValue = InstanceType::m5dn_8xlarge;
            return true;
          }
          else if (hashCode == m5dn_12xlarge_HASH)
          {
            enumValue = InstanceType::m5dn_12xlarge;
            return true;
          }
          else if (hashCode == m5dn_16xlarge_HASH)
          {
            enumValue = InstanceType::m5dn_16xlarge;
            return true;
          }
          else if (hashCode == m5dn_24xlarge_HASH)
          {
            enumValue = InstanceType::m5dn_24xlarge;
            return true;
          }
          else if (hashCode == m5dn_metal_HASH)
          {
            enumValue = InstanceType::m5dn_metal;
            return true;
          }
          else if (hashCode == m5n_large_HASH)
          {
            enumValue = InstanceType::m5n_large;
            return true;
          }
          else if (hashCode == m5n_xlarge_HASH)
          {
            enumValue = InstanceType::m5n_xlarge;
            return true;
          }
          else if (hashCode == m5n_2xlarge_HASH)
          {
            enumValue = InstanceType::m5n_2xlarge;
            return true;
          }
          else if (hashCode == m5n_4xlarge_HASH)
          {
            enumValue = InstanceType::m5n_4xlarge;
            return true;
          }
          else if (hashCode == m5n_8xlarge_HASH)
          {
            enumValue = InstanceType::m5n_8xlarge;
            return true;
          }
          else if (hashCode == m5n_12xlarge_HASH)
          {
            enumValue = InstanceType::m5n_12xlarge;
            return true;
          }
          else if (hashCode == m5n_16xlarge_HASH)
          {
            enumValue = InstanceType::m5n_16xlarge;
            return true;
          }
          else if (hashCode == m5n_24xlarge_HASH)
          {
            enumValue = InstanceType::m5n_24xlarge;
            return true;
          }
          else if (hashCode == m5n_metal_HASH)
          {
            enumValue = InstanceType::m5n_metal;
            return true;
          }
          else if (hashCode == m5zn_large_HASH)
          {
            enumValue = InstanceType::m5zn_large;
            return true;
          }
          else if (hashCode == m5zn_xlarge_HASH)
          {
            enumValue = InstanceType::m5zn_xlarge;
            return true;
          }
          else if (hashCode == m5zn_2xlarge_HASH)
          {
            enumValue = InstanceType::m5zn_2xlarge;
            return true;
          }
          else if (hashCode == m5zn_3xlarge_HASH)
          {
            enumValue = InstanceType::m5zn_3xlarge;
            return true;
          }
          else if (hashCode == m5zn_6xlarge_HASH)
          {
            enumValue = InstanceType::m5zn_6xlarge;
            return true;
          }
          else if (hashCode == m5zn_12xlarge_HASH)
          {
            enumValue = InstanceType::m5zn_12xlarge;
            return true;
          }
          else if (hashCode == m5zn_metal_HASH)
          {
            enumValue = InstanceType::m5zn_metal;
            return true;
          }
          else if (hashCode == m6a_large_HASH)
          {
            enumValue = InstanceType::m6a_large;
            return true;
          }
          else if (hashCode == m6a_xlarge_HASH)
          {
            enumValue = InstanceType::m6a_xlarge;
            return true;
          }
          else if (hashCode == m6a_2xlarge_HASH)
          {
            enumValue = InstanceType::m6a_2xlarge;
            return true;
          }
          else if (hashCode == m6a_4xlarge_HASH)
          {
            enumValue = InstanceType::m6a_4xlarge;
            return true;
          }
          else if (hashCode == m6a_8xlarge_HASH)
          {
            enumValue = InstanceType::m6a_8xlarge;
            return true;
          }
          else if (hashCode == m6a_12xlarge_HASH)
          {
            enumValue = InstanceType::m6a_12xlarge;
            return true;
          }
          else if (hashCode == m6a_16xlarge_HASH)
          {
            enumValue = InstanceType::m6a_16xlarge;
            return true;
          }
          else if (hashCode == m6a_24xlarge_HASH)
          {
            enumValue = InstanceType::m6a_24xlarge;
            return true;
          }
          else if (hashCode == m6a_32xlarge_HASH)
          {
            enumValue = InstanceType::m6a_32xlarge;
            return true;
          }
          else if (hashCode == m6a_48xlarge_HASH)
          {
            enumValue = InstanceType::m6a_48xlarge;
            return true;
          }
          else if (hashCode == m6g_metal_HASH)
          {
            enumValue = InstanceType::m6g_metal;
            return true;
          }
          else if (hashCode == m6g_medium_HASH)
          {
            enumValue = InstanceType::m6g_medium;
            return true;
          }
          else if (hashCode == m6g_large_HASH)
          {
            enumValue = InstanceType::m6g_large;
            return true;
          }
          else if (hashCode == m6g_xlarge_HASH)
          {
            enumValue = InstanceType::m6g_xlarge;
            return true;
          }
          else if (hashCode == m6g_2xlarge_HASH)
          {
            enumValue = InstanceType::m6g_2xlarge;
            return true;
          }
          else if (hashCode == m6g_4xlarge_HASH)
          {
            enumValue = InstanceType::m6g_4xlarge;
            return true;
          }
          else if (hashCode == m6g_8xlarge_HASH)
          {
            enumValue = InstanceType::m6g_8xlarge;
            return true;
          }
          else if (hashCode == m6g_12xlarge_HASH)
          {
            enumValue = InstanceType::m6g_12xlarge;
            return true;
          }
          else if (hashCode == m6g_16xlarge_HASH)
          {
            enumValue = InstanceType::m6g_16xlarge;
            return true;
          }
          else if (hashCode == m6gd_metal_HASH)
          {
            enumValue = InstanceType::m6gd_metal;
            return true;
          }
          else if (hashCode == m6gd_medium_HASH)
          {
            enumValue = InstanceType::m6gd_medium;
            return true;
          }
          else if (hashCode == m6gd_large_HASH)
          {
            enumValue = InstanceType::m6gd_large;
            return true;
          }
          else if (hashCode == m6gd_xlarge_HASH)
          {
            enumValue = InstanceType::m6gd_xlarge;
            return true;
          }
          else if (hashCode == m6gd_2xlarge_HASH)
          {
            enumValue = InstanceType::m6gd_2xlarge;
            return true;
          }
          else if (hashCode == m6gd_4xlarge_HASH)
          {
            enumValue = InstanceType::m6gd_4xlarge;
            return true;
          }
          else if (hashCode == m6gd_8xlarge_HASH)
          {
            enumValue = InstanceType::m6gd_8xlarge;
            return true;
          }
          else if (hashCode == m6gd_12xlarge_HASH)
          {
            enumValue = InstanceType::m6gd_12xlarge;
            return true;
          }
          else if (hashCode == m6gd_16xlarge_HASH)
          {
            enumValue = InstanceType::m6gd_16xlarge;
            return true;
          }
          else if (hashCode == m6i_large_HASH)
          {
            enumValue = InstanceType::m6i_large;
            return true;
          }
          else if (hashCode == m6i_xlarge_HASH)
          {
            enumValue = InstanceType::m6i_xlarge;
            return true;
          }
          else if (hashCode == m6i_2xlarge_HASH)
          {
            enumValue = InstanceType::m6i_2xlarge;
            return true;
          }
          else if (hashCode == m6i_4xlarge_HASH)
          {
            enumValue = InstanceType::m6i_4xlarge;
            return true;
          }
          else if (hashCode == m6i_8xlarge_HASH)
          {
            enumValue = InstanceType::m6i_8xlarge;
            return true;
          }
          else if (hashCode == m6i_12xlarge_HASH)
          {
            enumValue = InstanceType::m6i_12xlarge;
            return true;
          }
          else if (hashCode == m6i_16xlarge_HASH)
          {
            enumValue = InstanceType::m6i_16xlarge;
            return true;
          }
          else if (hashCode == m6i_24xlarge_HASH)
          {
            enumValue = InstanceType::m6i_24xlarge;
            return true;
          }
          else if (hashCode == m6i_32xlarge_HASH)
          {
            enumValue = InstanceType::m6i_32xlarge;
            return true;
          }
          else if (hashCode == m6i_metal_HASH)
          {
            enumValue = InstanceType::m6i_metal;
            return true;
          }
          else if (hashCode == mac1_metal_HASH)
          {
            enumValue = InstanceType::mac1_metal;
            return true;
          }
          else if (hashCode == p2_xlarge_HASH)
          {
            enumValue = InstanceType::p2_xlarge;
            return true;
          }
          else if (hashCode == p2_8xlarge_HASH)
          {
            enumValue = InstanceType::p2_8xlarge;
            return true;
          }
          else if (hashCode == p2_16xlarge_HASH)
          {
            enumValue = InstanceType::p2_16xlarge;
            return true;
          }
          else if (hashCode == p3_2xlarge_HASH)
          {
            enumValue = InstanceType::p3_2xlarge;
            return true;
          }
          else if (hashCode == p3_8xlarge_HASH)
          {
            enumValue = InstanceType::p3_8xlarge;
            return true;
          }
          else if (hashCode == p3_16xlarge_HASH)
          {
            enumValue = InstanceType::p3_16xlarge;
            return true;
          }
          else if (hashCode == p3dn_24xlarge_HASH)
          {
            enumValue = InstanceType::p3dn_24xlarge;
            return true;
          }
          else if (hashCode == p4d_24xlarge_HASH)
          {
            enumValue = InstanceType::p4d_24xlarge;
            return true;
          }
          else if (hashCode == r3_large_HASH)
          {
            enumValue = InstanceType::r3_large;
            return true;
          }
          else if (hashCode == r3_xlarge_HASH)
          {
            enumValue = InstanceType::r3_xlarge;
            return true;
          }
          else if (hashCode == r3_2xlarge_HASH)
          {
            enumValue = InstanceType::r3_2xlarge;
            return true;
          }
          else if (hashCode == r3_4xlarge_HASH)
          {
            enumValue = InstanceType::r3_4xlarge;
            return true;
          }
          else if (hashCode == r3_8xlarge_HASH)
          {
            enumValue = InstanceType::r3_8xlarge;
            return true;
          }
          else if (hashCode == r4_large_HASH)
          {
            enumValue = InstanceType::r4_large;
            return true;
          }
          else if (hashCode == r4_xlarge_HASH)
          {
            enumValue = InstanceType::r4_xlarge;
            return true;
          }
          else if (hashCode == r4_2xlarge_HASH)
          {
            enumValue = InstanceType::r4_2xlarge;
            return true;
          }
          else if (hashCode == r4_4xlarge_HASH)
          {
            enumValue = InstanceType::r4_4xlarge;
            return true;
          }
          else if (hashCode == r4_8xlarge_HASH)
          {
            enumValue = InstanceType::r4_8xlarge;
            return true;
          }
          else if (hashCode == r4_16xlarge_HASH)
          {
            enumValue = InstanceType::r4_16xlarge;
            return true;
          }
          else if (hashCode == r5_large_HASH)
          {
            enumValue = InstanceType::r5_large;
            return true;
          }
          else if (hashCode == r5_xlarge_HASH)
          {
            enumValue = InstanceType::r5_xlarge;
            return true;
          }
          else if (hashCode == r5_2xlarge_HASH)
          {
            enumValue = InstanceType::r5_2xlarge;
            return true;
          }
          else if (hashCode == r5_4xlarge_HASH)
          {
            enumValue = InstanceType::r5_4xlarge;
            return true;
          }
          else if (hashCode == r5_8xlarge_HASH)
          {
            enumValue = InstanceType::r5_8xlarge;
            return true;
          }
          else if (hashCode == r5_12xlarge_HASH)
          {
            enumValue = InstanceType::r5_12xlarge;
            return true;
          }
          else if (hashCode == r5_16xlarge_HASH)
          {
            enumValue = InstanceType::r5_16xlarge;
            return true;
          }
          else if (hashCode == r5_24xlarge_HASH)
          {
            enumValue = InstanceType::r5_24xlarge;
            return true;
          }
          else if (hashCode == r5_metal_HASH)
          {
            enumValue = InstanceType::r5_metal;
            return true;
          }
          else if (hashCode == r5a_large_HASH)
          {
            enumValue = InstanceType::r5a_large;
            return true;
          }
          else if (hashCode == r5a_xlarge_HASH)
          {
            enumValue = InstanceType::r5a_xlarge;
            return true;
          }
          else if (hashCode == r5a_2xlarge_HASH)
          {
            enumValue = InstanceType::r5a_2xlarge;
            return true;
          }
          else if (hashCode == r5a_4xlarge_HASH)
          {
            enumValue = InstanceType::r5a_4xlarge;
            return true;
          }
          else if (hashCode == r5a_8xlarge_HASH)
          {
            enumValue = InstanceType::r5a_8xlarge;
            return true;
          }
          else if (hashCode == r5a_12xlarge_HASH)
          {
            enumValue = InstanceType::r5a_12xlarge;
            return true;
          }
          else if (hashCode == r5a_16xlarge_HASH)
          {
            enumValue = InstanceType::r5a_16xlarge;
            return true;
          }
          else if (hashCode == r5a_24xlarge_HASH)
          {
            enumValue = InstanceType::r5a_24xlarge;
            return true;
          }
          else if (hashCode == r5ad_large_HASH)
          {
            enumValue = InstanceType::r5ad_large;
            return true;
          }
          else if (hashCode == r5ad_xlarge_HASH)
          {
            enumValue = InstanceType::r5ad_xlarge;
            return true;
          }
          else if (hashCode == r5ad_2xlarge_HASH)
          {
            enumValue = InstanceType::r5ad_2xlarge;
            return true;
          }
          else if (hashCode == r5ad_4xlarge_HASH)
          {
            enumValue = InstanceType::r5ad_4xlarge;
            return true;
          }
          else if (hashCode == r5ad_8xlarge_HASH)
          {
            enumValue = InstanceType::r5ad_8xlarge;
            return true;
          }
          else if (hashCode == r5ad_12xlarge_HASH)
          {
            enumValue = InstanceType::r5ad_12xlarge;
            return true;
          }
          else if (hashCode == r5ad_16xlarge_HASH)
          {
            enumValue = InstanceType::r5ad_16xlarge;
            return true;
          }
          else if (hashCode == r5ad_24xlarge_HASH)
          {
            enumValue = InstanceType::r5ad_24xlarge;
            return true;
          }
          else if (hashCode == r5b_large_HASH)
          {
            enumValue = InstanceType::r5b_large;
            return true;
          }
          else if (hashCode == r5b_xlarge_HASH)
          {
            enumValue = InstanceType::r5b_xlarge;
            return true;
          }
          else if (hashCode == r5b_2xlarge_HASH)
          {
            enumValue = InstanceType::r5b_2xlarge;
            return true;
          }
          else if (hashCode == r5b_4xlarge_HASH)
          {
            enumValue = InstanceType::r5b_4xlarge;
            return true;
          }
          else if (hashCode == r5b_8xlarge_HASH)
          {
            enumValue = InstanceType::r5b_8xlarge;
            return true;
          }
          else if (hashCode == r5b_12xlarge_HASH)
          {
            enumValue = InstanceType::r5b_12xlarge;
            return true;
          }
          else if (hashCode == r5b_16xlarge_HASH)
          {
            enumValue = InstanceType::r5b_16xlarge;
            return true;
          }
          else if (hashCode == r5b_24xlarge_HASH)
          {
            enumValue = InstanceType::r5b_24xlarge;
            return true;
          }
          else if (hashCode == r5b_metal_HASH)
          {
            enumValue = InstanceType::r5b_metal;
            return true;
          }
          else if (hashCode == r5d_large_HASH)
          {
            enumValue = InstanceType::r5d_large;
            return true;
          }
          else if (hashCode == r5d_xlarge_HASH)
          {
            enumValue = InstanceType::r5d_xlarge;
            return true;
          }
          else if (hashCode == r5d_2xlarge_HASH)
          {
            enumValue = InstanceType::r5d_2xlarge;
            return true;
          }
          else if (hashCode == r5d_4xlarge_HASH)
          {
            enumValue = InstanceType::r5d_4xlarge;
            return true;
          }
          else if (hashCode == r5d_8xlarge_HASH)
          {
            enumValue = InstanceType::r5d_8xlarge;
            return true;
          }
          else if (hashCode == r5d_12xlarge_HASH)
          {
            enumValue = InstanceType::r5d_12xlarge;
            return true;
          }
          else if (hashCode == r5d_16xlarge_HASH)
          {
            enumValue = InstanceType::r5d_16xlarge;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper3(int hashCode, InstanceType& enumValue)
        {
          if (hashCode == r5d_24xlarge_HASH)
          {
            enumValue = InstanceType::r5d_24xlarge;
            return true;
          }
          else if (hashCode == r5d_metal_HASH)
          {
            enumValue = InstanceType::r5d_metal;
            return true;
          }
          else if (hashCode == r5dn_large_HASH)
          {
            enumValue = InstanceType::r5dn_large;
            return true;
          }
          else if (hashCode == r5dn_xlarge_HASH)
          {
            enumValue = InstanceType::r5dn_xlarge;
            return true;
          }
          else if (hashCode == r5dn_2xlarge_HASH)
          {
            enumValue = InstanceType::r5dn_2xlarge;
            return true;
          }
          else if (hashCode == r5dn_4xlarge_HASH)
          {
            enumValue = InstanceType::r5dn_4xlarge;
            return true;
          }
          else if (hashCode == r5dn_8xlarge_HASH)
          {
            enumValue = InstanceType::r5dn_8xlarge;
            return true;
          }
          else if (hashCode == r5dn_12xlarge_HASH)
          {
            enumValue = InstanceType::r5dn_12xlarge;
            return true;
          }
          else if (hashCode == r5dn_16xlarge_HASH)
          {
            enumValue = InstanceType::r5dn_16xlarge;
            return true;
          }
          else if (hashCode == r5dn_24xlarge_HASH)
          {
            enumValue = InstanceType::r5dn_24xlarge;
            return true;
          }
          else if (hashCode == r5dn_metal_HASH)
          {
            enumValue = InstanceType::r5dn_metal;
            return true;
          }
          else if (hashCode == r5n_large_HASH)
          {
            enumValue = InstanceType::r5n_large;
            return true;
          }
          else if (hashCode == r5n_xlarge_HASH)
          {
            enumValue = InstanceType::r5n_xlarge;
            return true;
          }
          else if (hashCode == r5n_2xlarge_HASH)
          {
            enumValue = InstanceType::r5n_2xlarge;
            return true;
          }
          else if (hashCode == r5n_4xlarge_HASH)
          {
            enumValue = InstanceType::r5n_4xlarge;
            return true;
          }
          else if (hashCode == r5n_8xlarge_HASH)
          {
            enumValue = InstanceType::r5n_8xlarge;
            return true;
          }
          else if (hashCode == r5n_12xlarge_HASH)
          {
            enumValue = InstanceType::r5n_12xlarge;
            return true;
          }
          else if (hashCode == r5n_16xlarge_HASH)
          {
            enumValue = InstanceType::r5n_16xlarge;
            return true;
          }
          else if (hashCode == r5n_24xlarge_HASH)
          {
            enumValue = InstanceType::r5n_24xlarge;
            return true;
          }
          else if (hashCode == r5n_metal_HASH)
          {
            enumValue = InstanceType::r5n_metal;
            return true;
          }
          else if (hashCode == r6g_medium_HASH)
          {
            enumValue = InstanceType::r6g_medium;
            return true;
          }
          else if (hashCode == r6g_large_HASH)
          {
            enumValue = InstanceType::r6g_large;
            return true;
          }
          else if (hashCode == r6g_xlarge_HASH)
          {
            enumValue = InstanceType::r6g_xlarge;
            return true;
          }
          else if (hashCode == r6g_2xlarge_HASH)
          {
            enumValue = InstanceType::r6g_2xlarge;
            return true;
          }
          else if (hashCode == r6g_4xlarge_HASH)
          {
            enumValue = InstanceType::r6g_4xlarge;
            return true;
          }
          else if (hashCode == r6g_8xlarge_HASH)
          {
            enumValue = InstanceType::r6g_8xlarge;
            return true;
          }
          else if (hashCode == r6g_12xlarge_HASH)
          {
            enumValue = InstanceType::r6g_12xlarge;
            return true;
          }
          else if (hashCode == r6g_16xlarge_HASH)
          {
            enumValue = InstanceType::r6g_16xlarge;
            return true;
          }
          else if (hashCode == r6g_metal_HASH)
          {
            enumValue = InstanceType::r6g_metal;
            return true;
          }
          else if (hashCode == r6gd_medium_HASH)
          {
            enumValue = InstanceType::r6gd_medium;
            return true;
          }
          else if (hashCode == r6gd_large_HASH)
          {
            enumValue = InstanceType::r6gd_large;
            return true;
          }
          else if (hashCode == r6gd_xlarge_HASH)
          {
            enumValue = InstanceType::r6gd_xlarge;
            return true;
          }
          else if (hashCode == r6gd_2xlarge_HASH)
          {
            enumValue = InstanceType::r6gd_2xlarge;
            return true;
          }
          else if (hashCode == r6gd_4xlarge_HASH)
          {
            enumValue = InstanceType::r6gd_4xlarge;
            return true;
          }
          else if (hashCode == r6gd_8xlarge_HASH)
          {
            enumValue = InstanceType::r6gd_8xlarge;
            return true;
          }
          else if (hashCode == r6gd_12xlarge_HASH)
          {
            enumValue = InstanceType::r6gd_12xlarge;
            return true;
          }
          else if (hashCode == r6gd_16xlarge_HASH)
          {
            enumValue = InstanceType::r6gd_16xlarge;
            return true;
          }
          else if (hashCode == r6gd_metal_HASH)
          {
            enumValue = InstanceType::r6gd_metal;
            return true;
          }
          else if (hashCode == r6i_large_HASH)
          {
            enumValue = InstanceType::r6i_large;
            return true;
          }
          else if (hashCode == r6i_xlarge_HASH)
          {
            enumValue = InstanceType::r6i_xlarge;
            return true;
          }
          else if (hashCode == r6i_2xlarge_HASH)
          {
            enumValue = InstanceType::r6i_2xlarge;
            return true;
          }
          else if (hashCode == r6i_4xlarge_HASH)
          {
            enumValue = InstanceType::r6i_4xlarge;
            return true;
          }
          else if (hashCode == r6i_8xlarge_HASH)
          {
            enumValue = InstanceType::r6i_8xlarge;
            return true;
          }
          else if (hashCode == r6i_12xlarge_HASH)
          {
            enumValue = InstanceType::r6i_12xlarge;
            return true;
          }
          else if (hashCode == r6i_16xlarge_HASH)
          {
            enumValue = InstanceType::r6i_16xlarge;
            return true;
          }
          else if (hashCode == r6i_24xlarge_HASH)
          {
            enumValue = InstanceType::r6i_24xlarge;
            return true;
          }
          else if (hashCode == r6i_32xlarge_HASH)
          {
            enumValue = InstanceType::r6i_32xlarge;
            return true;
          }
          else if (hashCode == r6i_metal_HASH)
          {
            enumValue = InstanceType::r6i_metal;
            return true;
          }
          else if (hashCode == t1_micro_HASH)
          {
            enumValue = InstanceType::t1_micro;
            return true;
          }
          else if (hashCode == t2_nano_HASH)
          {
            enumValue = InstanceType::t2_nano;
            return true;
          }
          else if (hashCode == t2_micro_HASH)
          {
            enumValue = InstanceType::t2_micro;
            return true;
          }
          else if (hashCode == t2_small_HASH)
          {
            enumValue = InstanceType::t2_small;
            return true;
          }
          else if (hashCode == t2_medium_HASH)
          {
            enumValue = InstanceType::t2_medium;
            return true;
          }
          else if (hashCode == t2_large_HASH)
          {
            enumValue = InstanceType::t2_large;
            return true;
          }
          else if (hashCode == t2_xlarge_HASH)
          {
            enumValue = InstanceType::t2_xlarge;
            return true;
          }
          else if (hashCode == t2_2xlarge_HASH)
          {
            enumValue = InstanceType::t2_2xlarge;
            return true;
          }
          else if (hashCode == t3_nano_HASH)
          {
            enumValue = InstanceType::t3_nano;
            return true;
          }
          else if (hashCode == t3_micro_HASH)
          {
            enumValue = InstanceType::t3_micro;
            return true;
          }
          else if (hashCode == t3_small_HASH)
          {
            enumValue = InstanceType::t3_small;
            return true;
          }
          else if (hashCode == t3_medium_HASH)
          {
            enumValue = InstanceType::t3_medium;
            return true;
          }
          else if (hashCode == t3_large_HASH)
          {
            enumValue = InstanceType::t3_large;
            return true;
          }
          else if (hashCode == t3_xlarge_HASH)
          {
            enumValue = InstanceType::t3_xlarge;
            return true;
          }
          else if (hashCode == t3_2xlarge_HASH)
          {
            enumValue = InstanceType::t3_2xlarge;
            return true;
          }
          else if (hashCode == t3a_nano_HASH)
          {
            enumValue = InstanceType::t3a_nano;
            return true;
          }
          else if (hashCode == t3a_micro_HASH)
          {
            enumValue = InstanceType::t3a_micro;
            return true;
          }
          else if (hashCode == t3a_small_HASH)
          {
            enumValue = InstanceType::t3a_small;
            return true;
          }
          else if (hashCode == t3a_medium_HASH)
          {
            enumValue = InstanceType::t3a_medium;
            return true;
          }
          else if (hashCode == t3a_large_HASH)
          {
            enumValue = InstanceType::t3a_large;
            return true;
          }
          else if (hashCode == t3a_xlarge_HASH)
          {
            enumValue = InstanceType::t3a_xlarge;
            return true;
          }
          else if (hashCode == t3a_2xlarge_HASH)
          {
            enumValue = InstanceType::t3a_2xlarge;
            return true;
          }
          else if (hashCode == t4g_nano_HASH)
          {
            enumValue = InstanceType::t4g_nano;
            return true;
          }
          else if (hashCode == t4g_micro_HASH)
          {
            enumValue = InstanceType::t4g_micro;
            return true;
          }
          else if (hashCode == t4g_small_HASH)
          {
            enumValue = InstanceType::t4g_small;
            return true;
          }
          else if (hashCode == t4g_medium_HASH)
          {
            enumValue = InstanceType::t4g_medium;
            return true;
          }
          else if (hashCode == t4g_large_HASH)
          {
            enumValue = InstanceType::t4g_large;
            return true;
          }
          else if (hashCode == t4g_xlarge_HASH)
          {
            enumValue = InstanceType::t4g_xlarge;
            return true;
          }
          else if (hashCode == t4g_2xlarge_HASH)
          {
            enumValue = InstanceType::t4g_2xlarge;
            return true;
          }
          else if (hashCode == u_6tb1_56xlarge_HASH)
          {
            enumValue = InstanceType::u_6tb1_56xlarge;
            return true;
          }
          else if (hashCode == u_6tb1_112xlarge_HASH)
          {
            enumValue = InstanceType::u_6tb1_112xlarge;
            return true;
          }
          else if (hashCode == u_9tb1_112xlarge_HASH)
          {
            enumValue = InstanceType::u_9tb1_112xlarge;
            return true;
          }
          else if (hashCode == u_12tb1_112xlarge_HASH)
          {
            enumValue = InstanceType::u_12tb1_112xlarge;
            return true;
          }
          else if (hashCode == u_6tb1_metal_HASH)
          {
            enumValue = InstanceType::u_6tb1_metal;
            return true;
          }
          else if (hashCode == u_9tb1_metal_HASH)
          {
            enumValue = InstanceType::u_9tb1_metal;
            return true;
          }
          else if (hashCode == u_12tb1_metal_HASH)
          {
            enumValue = InstanceType::u_12tb1_metal;
            return true;
          }
          else if (hashCode == u_18tb1_metal_HASH)
          {
            enumValue = InstanceType::u_18tb1_metal;
            return true;
          }
          else if (hashCode == u_24tb1_metal_HASH)
          {
            enumValue = InstanceType::u_24tb1_metal;
            return true;
          }
          else if (hashCode == vt1_3xlarge_HASH)
          {
            enumValue = InstanceType::vt1_3xlarge;
            return true;
          }
          else if (hashCode == vt1_6xlarge_HASH)
          {
            enumValue = InstanceType::vt1_6xlarge;
            return true;
          }
          else if (hashCode == vt1_24xlarge_HASH)
          {
            enumValue = InstanceType::vt1_24xlarge;
            return true;
          }
          else if (hashCode == x1_16xlarge_HASH)
          {
            enumValue = InstanceType::x1_16xlarge;
            return true;
          }
          else if (hashCode == x1_32xlarge_HASH)
          {
            enumValue = InstanceType::x1_32xlarge;
            return true;
          }
          else if (hashCode == x1e_xlarge_HASH)
          {
            enumValue = InstanceType::x1e_xlarge;
            return true;
          }
          else if (hashCode == x1e_2xlarge_HASH)
          {
            enumValue = InstanceType::x1e_2xlarge;
            return true;
          }
          else if (hashCode == x1e_4xlarge_HASH)
          {
            enumValue = InstanceType::x1e_4xlarge;
            return true;
          }
          else if (hashCode == x1e_8xlarge_HASH)
          {
            enumValue = InstanceType::x1e_8xlarge;
            return true;
          }
          else if (hashCode == x1e_16xlarge_HASH)
          {
            enumValue = InstanceType::x1e_16xlarge;
            return true;
          }
          else if (hashCode == x1e_32xlarge_HASH)
          {
            enumValue = InstanceType::x1e_32xlarge;
            return true;
          }
          else if (hashCode == x2iezn_2xlarge_HASH)
          {
            enumValue = InstanceType::x2iezn_2xlarge;
            return true;
          }
          else if (hashCode == x2iezn_4xlarge_HASH)
          {
            enumValue = InstanceType::x2iezn_4xlarge;
            return true;
          }
          else if (hashCode == x2iezn_6xlarge_HASH)
          {
            enumValue = InstanceType::x2iezn_6xlarge;
            return true;
          }
          else if (hashCode == x2iezn_8xlarge_HASH)
          {
            enumValue = InstanceType::x2iezn_8xlarge;
            return true;
          }
          else if (hashCode == x2iezn_12xlarge_HASH)
          {
            enumValue = InstanceType::x2iezn_12xlarge;
            return true;
          }
          else if (hashCode == x2iezn_metal_HASH)
          {
            enumValue = InstanceType::x2iezn_metal;
            return true;
          }
          else if (hashCode == x2gd_medium_HASH)
          {
            enumValue = InstanceType::x2gd_medium;
            return true;
          }
          else if (hashCode == x2gd_large_HASH)
          {
            enumValue = InstanceType::x2gd_large;
            return true;
          }
          else if (hashCode == x2gd_xlarge_HASH)
          {
            enumValue = InstanceType::x2gd_xlarge;
            return true;
          }
          else if (hashCode == x2gd_2xlarge_HASH)
          {
            enumValue = InstanceType::x2gd_2xlarge;
            return true;
          }
          else if (hashCode == x2gd_4xlarge_HASH)
          {
            enumValue = InstanceType::x2gd_4xlarge;
            return true;
          }
          else if (hashCode == x2gd_8xlarge_HASH)
          {
            enumValue = InstanceType::x2gd_8xlarge;
            return true;
          }
          else if (hashCode == x2gd_12xlarge_HASH)
          {
            enumValue = InstanceType::x2gd_12xlarge;
            return true;
          }
          else if (hashCode == x2gd_16xlarge_HASH)
          {
            enumValue = InstanceType::x2gd_16xlarge;
            return true;
          }
          else if (hashCode == x2gd_metal_HASH)
          {
            enumValue = InstanceType::x2gd_metal;
            return true;
          }
          else if (hashCode == z1d_large_HASH)
          {
            enumValue = InstanceType::z1d_large;
            return true;
          }
          else if (hashCode == z1d_xlarge_HASH)
          {
            enumValue = InstanceType::z1d_xlarge;
            return true;
          }
          else if (hashCode == z1d_2xlarge_HASH)
          {
            enumValue = InstanceType::z1d_2xlarge;
            return true;
          }
          else if (hashCode == z1d_3xlarge_HASH)
          {
            enumValue = InstanceType::z1d_3xlarge;
            return true;
          }
          else if (hashCode == z1d_6xlarge_HASH)
          {
            enumValue = InstanceType::z1d_6xlarge;
            return true;
          }
          else if (hashCode == z1d_12xlarge_HASH)
          {
            enumValue = InstanceType::z1d_12xlarge;
            return true;
          }
          else if (hashCode == z1d_metal_HASH)
          {
            enumValue = InstanceType::z1d_metal;
            return true;
          }
          else if (hashCode == x2idn_16xlarge_HASH)
          {
            enumValue = InstanceType::x2idn_16xlarge;
            return true;
          }
          else if (hashCode == x2idn_24xlarge_HASH)
          {
            enumValue = InstanceType::x2idn_24xlarge;
            return true;
          }
          else if (hashCode == x2idn_32xlarge_HASH)
          {
            enumValue = InstanceType::x2idn_32xlarge;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper4(int hashCode, InstanceType& enumValue)
        {
          if (hashCode == x2iedn_xlarge_HASH)
          {
            enumValue = InstanceType::x2iedn_xlarge;
            return true;
          }
          else if (hashCode == x2iedn_2xlarge_HASH)
          {
            enumValue = InstanceType::x2iedn_2xlarge;
            return true;
          }
          else if (hashCode == x2iedn_4xlarge_HASH)
          {
            enumValue = InstanceType::x2iedn_4xlarge;
            return true;
          }
          else if (hashCode == x2iedn_8xlarge_HASH)
          {
            enumValue = InstanceType::x2iedn_8xlarge;
            return true;
          }
          else if (hashCode == x2iedn_16xlarge_HASH)
          {
            enumValue = InstanceType::x2iedn_16xlarge;
            return true;
          }
          else if (hashCode == x2iedn_24xlarge_HASH)
          {
            enumValue = InstanceType::x2iedn_24xlarge;
            return true;
          }
          else if (hashCode == x2iedn_32xlarge_HASH)
          {
            enumValue = InstanceType::x2iedn_32xlarge;
            return true;
          }
          else if (hashCode == c6a_large_HASH)
          {
            enumValue = InstanceType::c6a_large;
            return true;
          }
          else if (hashCode == c6a_xlarge_HASH)
          {
            enumValue = InstanceType::c6a_xlarge;
            return true;
          }
          else if (hashCode == c6a_2xlarge_HASH)
          {
            enumValue = InstanceType::c6a_2xlarge;
            return true;
          }
          else if (hashCode == c6a_4xlarge_HASH)
          {
            enumValue = InstanceType::c6a_4xlarge;
            return true;
          }
          else if (hashCode == c6a_8xlarge_HASH)
          {
            enumValue = InstanceType::c6a_8xlarge;
            return true;
          }
          else if (hashCode == c6a_12xlarge_HASH)
          {
            enumValue = InstanceType::c6a_12xlarge;
            return true;
          }
          else if (hashCode == c6a_16xlarge_HASH)
          {
            enumValue = InstanceType::c6a_16xlarge;
            return true;
          }
          else if (hashCode == c6a_24xlarge_HASH)
          {
            enumValue = InstanceType::c6a_24xlarge;
            return true;
          }
          else if (hashCode == c6a_32xlarge_HASH)
          {
            enumValue = InstanceType::c6a_32xlarge;
            return true;
          }
          else if (hashCode == c6a_48xlarge_HASH)
          {
            enumValue = InstanceType::c6a_48xlarge;
            return true;
          }
          else if (hashCode == c6a_metal_HASH)
          {
            enumValue = InstanceType::c6a_metal;
            return true;
          }
          else if (hashCode == m6a_metal_HASH)
          {
            enumValue = InstanceType::m6a_metal;
            return true;
          }
          else if (hashCode == i4i_large_HASH)
          {
            enumValue = InstanceType::i4i_large;
            return true;
          }
          else if (hashCode == i4i_xlarge_HASH)
          {
            enumValue = InstanceType::i4i_xlarge;
            return true;
          }
          else if (hashCode == i4i_2xlarge_HASH)
          {
            enumValue = InstanceType::i4i_2xlarge;
            return true;
          }
          else if (hashCode == i4i_4xlarge_HASH)
          {
            enumValue = InstanceType::i4i_4xlarge;
            return true;
          }
          else if (hashCode == i4i_8xlarge_HASH)
          {
            enumValue = InstanceType::i4i_8xlarge;
            return true;
          }
          else if (hashCode == i4i_16xlarge_HASH)
          {
            enumValue = InstanceType::i4i_16xlarge;
            return true;
          }
          else if (hashCode == i4i_32xlarge_HASH)
          {
            enumValue = InstanceType::i4i_32xlarge;
            return true;
          }
          else if (hashCode == i4i_metal_HASH)
          {
            enumValue = InstanceType::i4i_metal;
            return true;
          }
          else if (hashCode == x2idn_metal_HASH)
          {
            enumValue = InstanceType::x2idn_metal;
            return true;
          }
          else if (hashCode == x2iedn_metal_HASH)
          {
            enumValue = InstanceType::x2iedn_metal;
            return true;
          }
          else if (hashCode == c7g_medium_HASH)
          {
            enumValue = InstanceType::c7g_medium;
            return true;
          }
          else if (hashCode == c7g_large_HASH)
          {
            enumValue = InstanceType::c7g_large;
            return true;
          }
          else if (hashCode == c7g_xlarge_HASH)
          {
            enumValue = InstanceType::c7g_xlarge;
            return true;
          }
          else if (hashCode == c7g_2xlarge_HASH)
          {
            enumValue = InstanceType::c7g_2xlarge;
            return true;
          }
          else if (hashCode == c7g_4xlarge_HASH)
          {
            enumValue = InstanceType::c7g_4xlarge;
            return true;
          }
          else if (hashCode == c7g_8xlarge_HASH)
          {
            enumValue = InstanceType::c7g_8xlarge;
            return true;
          }
          else if (hashCode == c7g_12xlarge_HASH)
          {
            enumValue = InstanceType::c7g_12xlarge;
            return true;
          }
          else if (hashCode == c7g_16xlarge_HASH)
          {
            enumValue = InstanceType::c7g_16xlarge;
            return true;
          }
          else if (hashCode == mac2_metal_HASH)
          {
            enumValue = InstanceType::mac2_metal;
            return true;
          }
          else if (hashCode == c6id_large_HASH)
          {
            enumValue = InstanceType::c6id_large;
            return true;
          }
          else if (hashCode == c6id_xlarge_HASH)
          {
            enumValue = InstanceType::c6id_xlarge;
            return true;
          }
          else if (hashCode == c6id_2xlarge_HASH)
          {
            enumValue = InstanceType::c6id_2xlarge;
            return true;
          }
          else if (hashCode == c6id_4xlarge_HASH)
          {
            enumValue = InstanceType::c6id_4xlarge;
            return true;
          }
          else if (hashCode == c6id_8xlarge_HASH)
          {
            enumValue = InstanceType::c6id_8xlarge;
            return true;
          }
          else if (hashCode == c6id_12xlarge_HASH)
          {
            enumValue = InstanceType::c6id_12xlarge;
            return true;
          }
          else if (hashCode == c6id_16xlarge_HASH)
          {
            enumValue = InstanceType::c6id_16xlarge;
            return true;
          }
          else if (hashCode == c6id_24xlarge_HASH)
          {
            enumValue = InstanceType::c6id_24xlarge;
            return true;
          }
          else if (hashCode == c6id_32xlarge_HASH)
          {
            enumValue = InstanceType::c6id_32xlarge;
            return true;
          }
          else if (hashCode == c6id_metal_HASH)
          {
            enumValue = InstanceType::c6id_metal;
            return true;
          }
          else if (hashCode == m6id_large_HASH)
          {
            enumValue = InstanceType::m6id_large;
            return true;
          }
          else if (hashCode == m6id_xlarge_HASH)
          {
            enumValue = InstanceType::m6id_xlarge;
            return true;
          }
          else if (hashCode == m6id_2xlarge_HASH)
          {
            enumValue = InstanceType::m6id_2xlarge;
            return true;
          }
          else if (hashCode == m6id_4xlarge_HASH)
          {
            enumValue = InstanceType::m6id_4xlarge;
            return true;
          }
          else if (hashCode == m6id_8xlarge_HASH)
          {
            enumValue = InstanceType::m6id_8xlarge;
            return true;
          }
          else if (hashCode == m6id_12xlarge_HASH)
          {
            enumValue = InstanceType::m6id_12xlarge;
            return true;
          }
          else if (hashCode == m6id_16xlarge_HASH)
          {
            enumValue = InstanceType::m6id_16xlarge;
            return true;
          }
          else if (hashCode == m6id_24xlarge_HASH)
          {
            enumValue = InstanceType::m6id_24xlarge;
            return true;
          }
          else if (hashCode == m6id_32xlarge_HASH)
          {
            enumValue = InstanceType::m6id_32xlarge;
            return true;
          }
          else if (hashCode == m6id_metal_HASH)
          {
            enumValue = InstanceType::m6id_metal;
            return true;
          }
          else if (hashCode == r6id_large_HASH)
          {
            enumValue = InstanceType::r6id_large;
            return true;
          }
          else if (hashCode == r6id_xlarge_HASH)
          {
            enumValue = InstanceType::r6id_xlarge;
            return true;
          }
          else if (hashCode == r6id_2xlarge_HASH)
          {
            enumValue = InstanceType::r6id_2xlarge;
            return true;
          }
          else if (hashCode == r6id_4xlarge_HASH)
          {
            enumValue = InstanceType::r6id_4xlarge;
            return true;
          }
          else if (hashCode == r6id_8xlarge_HASH)
          {
            enumValue = InstanceType::r6id_8xlarge;
            return true;
          }
          else if (hashCode == r6id_12xlarge_HASH)
          {
            enumValue = InstanceType::r6id_12xlarge;
            return true;
          }
          else if (hashCode == r6id_16xlarge_HASH)
          {
            enumValue = InstanceType::r6id_16xlarge;
            return true;
          }
          else if (hashCode == r6id_24xlarge_HASH)
          {
            enumValue = InstanceType::r6id_24xlarge;
            return true;
          }
          else if (hashCode == r6id_32xlarge_HASH)
          {
            enumValue = InstanceType::r6id_32xlarge;
            return true;
          }
          else if (hashCode == r6id_metal_HASH)
          {
            enumValue = InstanceType::r6id_metal;
            return true;
          }
          else if (hashCode == r6a_large_HASH)
          {
            enumValue = InstanceType::r6a_large;
            return true;
          }
          else if (hashCode == r6a_xlarge_HASH)
          {
            enumValue = InstanceType::r6a_xlarge;
            return true;
          }
          else if (hashCode == r6a_2xlarge_HASH)
          {
            enumValue = InstanceType::r6a_2xlarge;
            return true;
          }
          else if (hashCode == r6a_4xlarge_HASH)
          {
            enumValue = InstanceType::r6a_4xlarge;
            return true;
          }
          else if (hashCode == r6a_8xlarge_HASH)
          {
            enumValue = InstanceType::r6a_8xlarge;
            return true;
          }
          else if (hashCode == r6a_12xlarge_HASH)
          {
            enumValue = InstanceType::r6a_12xlarge;
            return true;
          }
          else if (hashCode == r6a_16xlarge_HASH)
          {
            enumValue = InstanceType::r6a_16xlarge;
            return true;
          }
          else if (hashCode == r6a_24xlarge_HASH)
          {
            enumValue = InstanceType::r6a_24xlarge;
            return true;
          }
          else if (hashCode == r6a_32xlarge_HASH)
          {
            enumValue = InstanceType::r6a_32xlarge;
            return true;
          }
          else if (hashCode == r6a_48xlarge_HASH)
          {
            enumValue = InstanceType::r6a_48xlarge;
            return true;
          }
          else if (hashCode == r6a_metal_HASH)
          {
            enumValue = InstanceType::r6a_metal;
            return true;
          }
          else if (hashCode == p4de_24xlarge_HASH)
          {
            enumValue = InstanceType::p4de_24xlarge;
            return true;
          }
          else if (hashCode == u_3tb1_56xlarge_HASH)
          {
            enumValue = InstanceType::u_3tb1_56xlarge;
            return true;
          }
          else if (hashCode == u_18tb1_112xlarge_HASH)
          {
            enumValue = InstanceType::u_18tb1_112xlarge;
            return true;
          }
          else if (hashCode == u_24tb1_112xlarge_HASH)
          {
            enumValue = InstanceType::u_24tb1_112xlarge;
            return true;
          }
          else if (hashCode == trn1_2xlarge_HASH)
          {
            enumValue = InstanceType::trn1_2xlarge;
            return true;
          }
          else if (hashCode == trn1_32xlarge_HASH)
          {
            enumValue = InstanceType::trn1_32xlarge;
            return true;
          }
          else if (hashCode == hpc6id_32xlarge_HASH)
          {
            enumValue = InstanceType::hpc6id_32xlarge;
            return true;
          }
          else if (hashCode == c6in_large_HASH)
          {
            enumValue = InstanceType::c6in_large;
            return true;
          }
          else if (hashCode == c6in_xlarge_HASH)
          {
            enumValue = InstanceType::c6in_xlarge;
            return true;
          }
          else if (hashCode == c6in_2xlarge_HASH)
          {
            enumValue = InstanceType::c6in_2xlarge;
            return true;
          }
          else if (hashCode == c6in_4xlarge_HASH)
          {
            enumValue = InstanceType::c6in_4xlarge;
            return true;
          }
          else if (hashCode == c6in_8xlarge_HASH)
          {
            enumValue = InstanceType::c6in_8xlarge;
            return true;
          }
          else if (hashCode == c6in_12xlarge_HASH)
          {
            enumValue = InstanceType::c6in_12xlarge;
            return true;
          }
          else if (hashCode == c6in_16xlarge_HASH)
          {
            enumValue = InstanceType::c6in_16xlarge;
            return true;
          }
          else if (hashCode == c6in_24xlarge_HASH)
          {
            enumValue = InstanceType::c6in_24xlarge;
            return true;
          }
          else if (hashCode == c6in_32xlarge_HASH)
          {
            enumValue = InstanceType::c6in_32xlarge;
            return true;
          }
          else if (hashCode == m6in_large_HASH)
          {
            enumValue = InstanceType::m6in_large;
            return true;
          }
          else if (hashCode == m6in_xlarge_HASH)
          {
            enumValue = InstanceType::m6in_xlarge;
            return true;
          }
          else if (hashCode == m6in_2xlarge_HASH)
          {
            enumValue = InstanceType::m6in_2xlarge;
            return true;
          }
          else if (hashCode == m6in_4xlarge_HASH)
          {
            enumValue = InstanceType::m6in_4xlarge;
            return true;
          }
          else if (hashCode == m6in_8xlarge_HASH)
          {
            enumValue = InstanceType::m6in_8xlarge;
            return true;
          }
          else if (hashCode == m6in_12xlarge_HASH)
          {
            enumValue = InstanceType::m6in_12xlarge;
            return true;
          }
          else if (hashCode == m6in_16xlarge_HASH)
          {
            enumValue = InstanceType::m6in_16xlarge;
            return true;
          }
          else if (hashCode == m6in_24xlarge_HASH)
          {
            enumValue = InstanceType::m6in_24xlarge;
            return true;
          }
          else if (hashCode == m6in_32xlarge_HASH)
          {
            enumValue = InstanceType::m6in_32xlarge;
            return true;
          }
          else if (hashCode == m6idn_large_HASH)
          {
            enumValue = InstanceType::m6idn_large;
            return true;
          }
          else if (hashCode == m6idn_xlarge_HASH)
          {
            enumValue = InstanceType::m6idn_xlarge;
            return true;
          }
          else if (hashCode == m6idn_2xlarge_HASH)
          {
            enumValue = InstanceType::m6idn_2xlarge;
            return true;
          }
          else if (hashCode == m6idn_4xlarge_HASH)
          {
            enumValue = InstanceType::m6idn_4xlarge;
            return true;
          }
          else if (hashCode == m6idn_8xlarge_HASH)
          {
            enumValue = InstanceType::m6idn_8xlarge;
            return true;
          }
          else if (hashCode == m6idn_12xlarge_HASH)
          {
            enumValue = InstanceType::m6idn_12xlarge;
            return true;
          }
          else if (hashCode == m6idn_16xlarge_HASH)
          {
            enumValue = InstanceType::m6idn_16xlarge;
            return true;
          }
          else if (hashCode == m6idn_24xlarge_HASH)
          {
            enumValue = InstanceType::m6idn_24xlarge;
            return true;
          }
          else if (hashCode == m6idn_32xlarge_HASH)
          {
            enumValue = InstanceType::m6idn_32xlarge;
            return true;
          }
          else if (hashCode == r6in_large_HASH)
          {
            enumValue = InstanceType::r6in_large;
            return true;
          }
          else if (hashCode == r6in_xlarge_HASH)
          {
            enumValue = InstanceType::r6in_xlarge;
            return true;
          }
          else if (hashCode == r6in_2xlarge_HASH)
          {
            enumValue = InstanceType::r6in_2xlarge;
            return true;
          }
          else if (hashCode == r6in_4xlarge_HASH)
          {
            enumValue = InstanceType::r6in_4xlarge;
            return true;
          }
          else if (hashCode == r6in_8xlarge_HASH)
          {
            enumValue = InstanceType::r6in_8xlarge;
            return true;
          }
          else if (hashCode == r6in_12xlarge_HASH)
          {
            enumValue = InstanceType::r6in_12xlarge;
            return true;
          }
          else if (hashCode == r6in_16xlarge_HASH)
          {
            enumValue = InstanceType::r6in_16xlarge;
            return true;
          }
          else if (hashCode == r6in_24xlarge_HASH)
          {
            enumValue = InstanceType::r6in_24xlarge;
            return true;
          }
          else if (hashCode == r6in_32xlarge_HASH)
          {
            enumValue = InstanceType::r6in_32xlarge;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper5(int hashCode, InstanceType& enumValue)
        {
          if (hashCode == r6idn_large_HASH)
          {
            enumValue = InstanceType::r6idn_large;
            return true;
          }
          else if (hashCode == r6idn_xlarge_HASH)
          {
            enumValue = InstanceType::r6idn_xlarge;
            return true;
          }
          else if (hashCode == r6idn_2xlarge_HASH)
          {
            enumValue = InstanceType::r6idn_2xlarge;
            return true;
          }
          else if (hashCode == r6idn_4xlarge_HASH)
          {
            enumValue = InstanceType::r6idn_4xlarge;
            return true;
          }
          else if (hashCode == r6idn_8xlarge_HASH)
          {
            enumValue = InstanceType::r6idn_8xlarge;
            return true;
          }
          else if (hashCode == r6idn_12xlarge_HASH)
          {
            enumValue = InstanceType::r6idn_12xlarge;
            return true;
          }
          else if (hashCode == r6idn_16xlarge_HASH)
          {
            enumValue = InstanceType::r6idn_16xlarge;
            return true;
          }
          else if (hashCode == r6idn_24xlarge_HASH)
          {
            enumValue = InstanceType::r6idn_24xlarge;
            return true;
          }
          else if (hashCode == r6idn_32xlarge_HASH)
          {
            enumValue = InstanceType::r6idn_32xlarge;
            return true;
          }
          else if (hashCode == c7g_metal_HASH)
          {
            enumValue = InstanceType::c7g_metal;
            return true;
          }
          else if (hashCode == m7g_medium_HASH)
          {
            enumValue = InstanceType::m7g_medium;
            return true;
          }
          else if (hashCode == m7g_large_HASH)
          {
            enumValue = InstanceType::m7g_large;
            return true;
          }
          else if (hashCode == m7g_xlarge_HASH)
          {
            enumValue = InstanceType::m7g_xlarge;
            return true;
          }
          else if (hashCode == m7g_2xlarge_HASH)
          {
            enumValue = InstanceType::m7g_2xlarge;
            return true;
          }
          else if (hashCode == m7g_4xlarge_HASH)
          {
            enumValue = InstanceType::m7g_4xlarge;
            return true;
          }
          else if (hashCode == m7g_8xlarge_HASH)
          {
            enumValue = InstanceType::m7g_8xlarge;
            return true;
          }
          else if (hashCode == m7g_12xlarge_HASH)
          {
            enumValue = InstanceType::m7g_12xlarge;
            return true;
          }
          else if (hashCode == m7g_16xlarge_HASH)
          {
            enumValue = InstanceType::m7g_16xlarge;
            return true;
          }
          else if (hashCode == m7g_metal_HASH)
          {
            enumValue = InstanceType::m7g_metal;
            return true;
          }
          else if (hashCode == r7g_medium_HASH)
          {
            enumValue = InstanceType::r7g_medium;
            return true;
          }
          else if (hashCode == r7g_large_HASH)
          {
            enumValue = InstanceType::r7g_large;
            return true;
          }
          else if (hashCode == r7g_xlarge_HASH)
          {
            enumValue = InstanceType::r7g_xlarge;
            return true;
          }
          else if (hashCode == r7g_2xlarge_HASH)
          {
            enumValue = InstanceType::r7g_2xlarge;
            return true;
          }
          else if (hashCode == r7g_4xlarge_HASH)
          {
            enumValue = InstanceType::r7g_4xlarge;
            return true;
          }
          else if (hashCode == r7g_8xlarge_HASH)
          {
            enumValue = InstanceType::r7g_8xlarge;
            return true;
          }
          else if (hashCode == r7g_12xlarge_HASH)
          {
            enumValue = InstanceType::r7g_12xlarge;
            return true;
          }
          else if (hashCode == r7g_16xlarge_HASH)
          {
            enumValue = InstanceType::r7g_16xlarge;
            return true;
          }
          else if (hashCode == r7g_metal_HASH)
          {
            enumValue = InstanceType::r7g_metal;
            return true;
          }
          else if (hashCode == c6in_metal_HASH)
          {
            enumValue = InstanceType::c6in_metal;
            return true;
          }
          else if (hashCode == m6in_metal_HASH)
          {
            enumValue = InstanceType::m6in_metal;
            return true;
          }
          else if (hashCode == m6idn_metal_HASH)
          {
            enumValue = InstanceType::m6idn_metal;
            return true;
          }
          else if (hashCode == r6in_metal_HASH)
          {
            enumValue = InstanceType::r6in_metal;
            return true;
          }
          else if (hashCode == r6idn_metal_HASH)
          {
            enumValue = InstanceType::r6idn_metal;
            return true;
          }
          else if (hashCode == inf2_xlarge_HASH)
          {
            enumValue = InstanceType::inf2_xlarge;
            return true;
          }
          else if (hashCode == inf2_8xlarge_HASH)
          {
            enumValue = InstanceType::inf2_8xlarge;
            return true;
          }
          else if (hashCode == inf2_24xlarge_HASH)
          {
            enumValue = InstanceType::inf2_24xlarge;
            return true;
          }
          else if (hashCode == inf2_48xlarge_HASH)
          {
            enumValue = InstanceType::inf2_48xlarge;
            return true;
          }
          else if (hashCode == trn1n_32xlarge_HASH)
          {
            enumValue = InstanceType::trn1n_32xlarge;
            return true;
          }
          else if (hashCode == i4g_large_HASH)
          {
            enumValue = InstanceType::i4g_large;
            return true;
          }
          else if (hashCode == i4g_xlarge_HASH)
          {
            enumValue = InstanceType::i4g_xlarge;
            return true;
          }
          else if (hashCode == i4g_2xlarge_HASH)
          {
            enumValue = InstanceType::i4g_2xlarge;
            return true;
          }
          else if (hashCode == i4g_4xlarge_HASH)
          {
            enumValue = InstanceType::i4g_4xlarge;
            return true;
          }
          else if (hashCode == i4g_8xlarge_HASH)
          {
            enumValue = InstanceType::i4g_8xlarge;
            return true;
          }
          else if (hashCode == i4g_16xlarge_HASH)
          {
            enumValue = InstanceType::i4g_16xlarge;
            return true;
          }
          else if (hashCode == hpc7g_4xlarge_HASH)
          {
            enumValue = InstanceType::hpc7g_4xlarge;
            return true;
          }
          else if (hashCode == hpc7g_8xlarge_HASH)
          {
            enumValue = InstanceType::hpc7g_8xlarge;
            return true;
          }
          else if (hashCode == hpc7g_16xlarge_HASH)
          {
            enumValue = InstanceType::hpc7g_16xlarge;
            return true;
          }
          else if (hashCode == c7gn_medium_HASH)
          {
            enumValue = InstanceType::c7gn_medium;
            return true;
          }
          else if (hashCode == c7gn_large_HASH)
          {
            enumValue = InstanceType::c7gn_large;
            return true;
          }
          else if (hashCode == c7gn_xlarge_HASH)
          {
            enumValue = InstanceType::c7gn_xlarge;
            return true;
          }
          else if (hashCode == c7gn_2xlarge_HASH)
          {
            enumValue = InstanceType::c7gn_2xlarge;
            return true;
          }
          else if (hashCode == c7gn_4xlarge_HASH)
          {
            enumValue = InstanceType::c7gn_4xlarge;
            return true;
          }
          else if (hashCode == c7gn_8xlarge_HASH)
          {
            enumValue = InstanceType::c7gn_8xlarge;
            return true;
          }
          else if (hashCode == c7gn_12xlarge_HASH)
          {
            enumValue = InstanceType::c7gn_12xlarge;
            return true;
          }
          else if (hashCode == c7gn_16xlarge_HASH)
          {
            enumValue = InstanceType::c7gn_16xlarge;
            return true;
          }
          else if (hashCode == p5_48xlarge_HASH)
          {
            enumValue = InstanceType::p5_48xlarge;
            return true;
          }
          else if (hashCode == m7i_large_HASH)
          {
            enumValue = InstanceType::m7i_large;
            return true;
          }
          else if (hashCode == m7i_xlarge_HASH)
          {
            enumValue = InstanceType::m7i_xlarge;
            return true;
          }
          else if (hashCode == m7i_2xlarge_HASH)
          {
            enumValue = InstanceType::m7i_2xlarge;
            return true;
          }
          else if (hashCode == m7i_4xlarge_HASH)
          {
            enumValue = InstanceType::m7i_4xlarge;
            return true;
          }
          else if (hashCode == m7i_8xlarge_HASH)
          {
            enumValue = InstanceType::m7i_8xlarge;
            return true;
          }
          else if (hashCode == m7i_12xlarge_HASH)
          {
            enumValue = InstanceType::m7i_12xlarge;
            return true;
          }
          else if (hashCode == m7i_16xlarge_HASH)
          {
            enumValue = InstanceType::m7i_16xlarge;
            return true;
          }
          else if (hashCode == m7i_24xlarge_HASH)
          {
            enumValue = InstanceType::m7i_24xlarge;
            return true;
          }
          else if (hashCode == m7i_48xlarge_HASH)
          {
            enumValue = InstanceType::m7i_48xlarge;
            return true;
          }
          else if (hashCode == m7i_flex_large_HASH)
          {
            enumValue = InstanceType::m7i_flex_large;
            return true;
          }
          else if (hashCode == m7i_flex_xlarge_HASH)
          {
            enumValue = InstanceType::m7i_flex_xlarge;
            return true;
          }
          else if (hashCode == m7i_flex_2xlarge_HASH)
          {
            enumValue = InstanceType::m7i_flex_2xlarge;
            return true;
          }
          else if (hashCode == m7i_flex_4xlarge_HASH)
          {
            enumValue = InstanceType::m7i_flex_4xlarge;
            return true;
          }
          else if (hashCode == m7i_flex_8xlarge_HASH)
          {
            enumValue = InstanceType::m7i_flex_8xlarge;
            return true;
          }
          else if (hashCode == m7a_medium_HASH)
          {
            enumValue = InstanceType::m7a_medium;
            return true;
          }
          else if (hashCode == m7a_large_HASH)
          {
            enumValue = InstanceType::m7a_large;
            return true;
          }
          else if (hashCode == m7a_xlarge_HASH)
          {
            enumValue = InstanceType::m7a_xlarge;
            return true;
          }
          else if (hashCode == m7a_2xlarge_HASH)
          {
            enumValue = InstanceType::m7a_2xlarge;
            return true;
          }
          else if (hashCode == m7a_4xlarge_HASH)
          {
            enumValue = InstanceType::m7a_4xlarge;
            return true;
          }
          else if (hashCode == m7a_8xlarge_HASH)
          {
            enumValue = InstanceType::m7a_8xlarge;
            return true;
          }
          else if (hashCode == m7a_12xlarge_HASH)
          {
            enumValue = InstanceType::m7a_12xlarge;
            return true;
          }
          else if (hashCode == m7a_16xlarge_HASH)
          {
            enumValue = InstanceType::m7a_16xlarge;
            return true;
          }
          else if (hashCode == m7a_24xlarge_HASH)
          {
            enumValue = InstanceType::m7a_24xlarge;
            return true;
          }
          else if (hashCode == m7a_32xlarge_HASH)
          {
            enumValue = InstanceType::m7a_32xlarge;
            return true;
          }
          else if (hashCode == m7a_48xlarge_HASH)
          {
            enumValue = InstanceType::m7a_48xlarge;
            return true;
          }
          else if (hashCode == m7a_metal_48xl_HASH)
          {
            enumValue = InstanceType::m7a_metal_48xl;
            return true;
          }
          else if (hashCode == hpc7a_12xlarge_HASH)
          {
            enumValue = InstanceType::hpc7a_12xlarge;
            return true;
          }
          else if (hashCode == hpc7a_24xlarge_HASH)
          {
            enumValue = InstanceType::hpc7a_24xlarge;
            return true;
          }
          else if (hashCode == hpc7a_48xlarge_HASH)
          {
            enumValue = InstanceType::hpc7a_48xlarge;
            return true;
          }
          else if (hashCode == hpc7a_96xlarge_HASH)
          {
            enumValue = InstanceType::hpc7a_96xlarge;
            return true;
          }
          else if (hashCode == c7gd_medium_HASH)
          {
            enumValue = InstanceType::c7gd_medium;
            return true;
          }
          else if (hashCode == c7gd_large_HASH)
          {
            enumValue = InstanceType::c7gd_large;
            return true;
          }
          else if (hashCode == c7gd_xlarge_HASH)
          {
            enumValue = InstanceType::c7gd_xlarge;
            return true;
          }
          else if (hashCode == c7gd_2xlarge_HASH)
          {
            enumValue = InstanceType::c7gd_2xlarge;
            return true;
          }
          else if (hashCode == c7gd_4xlarge_HASH)
          {
            enumValue = InstanceType::c7gd_4xlarge;
            return true;
          }
          else if (hashCode == c7gd_8xlarge_HASH)
          {
            enumValue = InstanceType::c7gd_8xlarge;
            return true;
          }
          else if (hashCode == c7gd_12xlarge_HASH)
          {
            enumValue = InstanceType::c7gd_12xlarge;
            return true;
          }
          else if (hashCode == c7gd_16xlarge_HASH)
          {
            enumValue = InstanceType::c7gd_16xlarge;
            return true;
          }
          else if (hashCode == m7gd_medium_HASH)
          {
            enumValue = InstanceType::m7gd_medium;
            return true;
          }
          else if (hashCode == m7gd_large_HASH)
          {
            enumValue = InstanceType::m7gd_large;
            return true;
          }
          else if (hashCode == m7gd_xlarge_HASH)
          {
            enumValue = InstanceType::m7gd_xlarge;
            return true;
          }
          else if (hashCode == m7gd_2xlarge_HASH)
          {
            enumValue = InstanceType::m7gd_2xlarge;
            return true;
          }
          else if (hashCode == m7gd_4xlarge_HASH)
          {
            enumValue = InstanceType::m7gd_4xlarge;
            return true;
          }
          else if (hashCode == m7gd_8xlarge_HASH)
          {
            enumValue = InstanceType::m7gd_8xlarge;
            return true;
          }
          else if (hashCode == m7gd_12xlarge_HASH)
          {
            enumValue = InstanceType::m7gd_12xlarge;
            return true;
          }
          else if (hashCode == m7gd_16xlarge_HASH)
          {
            enumValue = InstanceType::m7gd_16xlarge;
            return true;
          }
          else if (hashCode == r7gd_medium_HASH)
          {
            enumValue = InstanceType::r7gd_medium;
            return true;
          }
          else if (hashCode == r7gd_large_HASH)
          {
            enumValue = InstanceType::r7gd_large;
            return true;
          }
          else if (hashCode == r7gd_xlarge_HASH)
          {
            enumValue = InstanceType::r7gd_xlarge;
            return true;
          }
          else if (hashCode == r7gd_2xlarge_HASH)
          {
            enumValue = InstanceType::r7gd_2xlarge;
            return true;
          }
          else if (hashCode == r7gd_4xlarge_HASH)
          {
            enumValue = InstanceType::r7gd_4xlarge;
            return true;
          }
          else if (hashCode == r7gd_8xlarge_HASH)
          {
            enumValue = InstanceType::r7gd_8xlarge;
            return true;
          }
          else if (hashCode == r7gd_12xlarge_HASH)
          {
            enumValue = InstanceType::r7gd_12xlarge;
            return true;
          }
          else if (hashCode == r7gd_16xlarge_HASH)
          {
            enumValue = InstanceType::r7gd_16xlarge;
            return true;
          }
          else if (hashCode == r7a_medium_HASH)
          {
            enumValue = InstanceType::r7a_medium;
            return true;
          }
          else if (hashCode == r7a_large_HASH)
          {
            enumValue = InstanceType::r7a_large;
            return true;
          }
          else if (hashCode == r7a_xlarge_HASH)
          {
            enumValue = InstanceType::r7a_xlarge;
            return true;
          }
          else if (hashCode == r7a_2xlarge_HASH)
          {
            enumValue = InstanceType::r7a_2xlarge;
            return true;
          }
          else if (hashCode == r7a_4xlarge_HASH)
          {
            enumValue = InstanceType::r7a_4xlarge;
            return true;
          }
          else if (hashCode == r7a_8xlarge_HASH)
          {
            enumValue = InstanceType::r7a_8xlarge;
            return true;
          }
          else if (hashCode == r7a_12xlarge_HASH)
          {
            enumValue = InstanceType::r7a_12xlarge;
            return true;
          }
          else if (hashCode == r7a_16xlarge_HASH)
          {
            enumValue = InstanceType::r7a_16xlarge;
            return true;
          }
          else if (hashCode == r7a_24xlarge_HASH)
          {
            enumValue = InstanceType::r7a_24xlarge;
            return true;
          }
          else if (hashCode == r7a_32xlarge_HASH)
          {
            enumValue = InstanceType::r7a_32xlarge;
            return true;
          }
          else if (hashCode == r7a_48xlarge_HASH)
          {
            enumValue = InstanceType::r7a_48xlarge;
            return true;
          }
          else if (hashCode == c7i_large_HASH)
          {
            enumValue = InstanceType::c7i_large;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper6(int hashCode, InstanceType& enumValue)
        {
          if (hashCode == c7i_xlarge_HASH)
          {
            enumValue = InstanceType::c7i_xlarge;
            return true;
          }
          else if (hashCode == c7i_2xlarge_HASH)
          {
            enumValue = InstanceType::c7i_2xlarge;
            return true;
          }
          else if (hashCode == c7i_4xlarge_HASH)
          {
            enumValue = InstanceType::c7i_4xlarge;
            return true;
          }
          else if (hashCode == c7i_8xlarge_HASH)
          {
            enumValue = InstanceType::c7i_8xlarge;
            return true;
          }
          else if (hashCode == c7i_12xlarge_HASH)
          {
            enumValue = InstanceType::c7i_12xlarge;
            return true;
          }
          else if (hashCode == c7i_16xlarge_HASH)
          {
            enumValue = InstanceType::c7i_16xlarge;
            return true;
          }
          else if (hashCode == c7i_24xlarge_HASH)
          {
            enumValue = InstanceType::c7i_24xlarge;
            return true;
          }
          else if (hashCode == c7i_48xlarge_HASH)
          {
            enumValue = InstanceType::c7i_48xlarge;
            return true;
          }
          else if (hashCode == mac2_m2pro_metal_HASH)
          {
            enumValue = InstanceType::mac2_m2pro_metal;
            return true;
          }
          else if (hashCode == r7iz_large_HASH)
          {
            enumValue = InstanceType::r7iz_large;
            return true;
          }
          else if (hashCode == r7iz_xlarge_HASH)
          {
            enumValue = InstanceType::r7iz_xlarge;
            return true;
          }
          else if (hashCode == r7iz_2xlarge_HASH)
          {
            enumValue = InstanceType::r7iz_2xlarge;
            return true;
          }
          else if (hashCode == r7iz_4xlarge_HASH)
          {
            enumValue = InstanceType::r7iz_4xlarge;
            return true;
          }
          else if (hashCode == r7iz_8xlarge_HASH)
          {
            enumValue = InstanceType::r7iz_8xlarge;
            return true;
          }
          else if (hashCode == r7iz_12xlarge_HASH)
          {
            enumValue = InstanceType::r7iz_12xlarge;
            return true;
          }
          else if (hashCode == r7iz_16xlarge_HASH)
          {
            enumValue = InstanceType::r7iz_16xlarge;
            return true;
          }
          else if (hashCode == r7iz_32xlarge_HASH)
          {
            enumValue = InstanceType::r7iz_32xlarge;
            return true;
          }
          else if (hashCode == c7a_medium_HASH)
          {
            enumValue = InstanceType::c7a_medium;
            return true;
          }
          else if (hashCode == c7a_large_HASH)
          {
            enumValue = InstanceType::c7a_large;
            return true;
          }
          else if (hashCode == c7a_xlarge_HASH)
          {
            enumValue = InstanceType::c7a_xlarge;
            return true;
          }
          else if (hashCode == c7a_2xlarge_HASH)
          {
            enumValue = InstanceType::c7a_2xlarge;
            return true;
          }
          else if (hashCode == c7a_4xlarge_HASH)
          {
            enumValue = InstanceType::c7a_4xlarge;
            return true;
          }
          else if (hashCode == c7a_8xlarge_HASH)
          {
            enumValue = InstanceType::c7a_8xlarge;
            return true;
          }
          else if (hashCode == c7a_12xlarge_HASH)
          {
            enumValue = InstanceType::c7a_12xlarge;
            return true;
          }
          else if (hashCode == c7a_16xlarge_HASH)
          {
            enumValue = InstanceType::c7a_16xlarge;
            return true;
          }
          else if (hashCode == c7a_24xlarge_HASH)
          {
            enumValue = InstanceType::c7a_24xlarge;
            return true;
          }
          else if (hashCode == c7a_32xlarge_HASH)
          {
            enumValue = InstanceType::c7a_32xlarge;
            return true;
          }
          else if (hashCode == c7a_48xlarge_HASH)
          {
            enumValue = InstanceType::c7a_48xlarge;
            return true;
          }
          else if (hashCode == c7a_metal_48xl_HASH)
          {
            enumValue = InstanceType::c7a_metal_48xl;
            return true;
          }
          else if (hashCode == r7a_metal_48xl_HASH)
          {
            enumValue = InstanceType::r7a_metal_48xl;
            return true;
          }
          else if (hashCode == r7i_large_HASH)
          {
            enumValue = InstanceType::r7i_large;
            return true;
          }
          else if (hashCode == r7i_xlarge_HASH)
          {
            enumValue = InstanceType::r7i_xlarge;
            return true;
          }
          else if (hashCode == r7i_2xlarge_HASH)
          {
            enumValue = InstanceType::r7i_2xlarge;
            return true;
          }
          else if (hashCode == r7i_4xlarge_HASH)
          {
            enumValue = InstanceType::r7i_4xlarge;
            return true;
          }
          else if (hashCode == r7i_8xlarge_HASH)
          {
            enumValue = InstanceType::r7i_8xlarge;
            return true;
          }
          else if (hashCode == r7i_12xlarge_HASH)
          {
            enumValue = InstanceType::r7i_12xlarge;
            return true;
          }
          else if (hashCode == r7i_16xlarge_HASH)
          {
            enumValue = InstanceType::r7i_16xlarge;
            return true;
          }
          else if (hashCode == r7i_24xlarge_HASH)
          {
            enumValue = InstanceType::r7i_24xlarge;
            return true;
          }
          else if (hashCode == r7i_48xlarge_HASH)
          {
            enumValue = InstanceType::r7i_48xlarge;
            return true;
          }
          else if (hashCode == dl2q_24xlarge_HASH)
          {
            enumValue = InstanceType::dl2q_24xlarge;
            return true;
          }
          else if (hashCode == mac2_m2_metal_HASH)
          {
            enumValue = InstanceType::mac2_m2_metal;
            return true;
          }
          else if (hashCode == i4i_12xlarge_HASH)
          {
            enumValue = InstanceType::i4i_12xlarge;
            return true;
          }
          else if (hashCode == i4i_24xlarge_HASH)
          {
            enumValue = InstanceType::i4i_24xlarge;
            return true;
          }
          else if (hashCode == c7i_metal_24xl_HASH)
          {
            enumValue = InstanceType::c7i_metal_24xl;
            return true;
          }
          else if (hashCode == c7i_metal_48xl_HASH)
          {
            enumValue = InstanceType::c7i_metal_48xl;
            return true;
          }
          else if (hashCode == m7i_metal_24xl_HASH)
          {
            enumValue = InstanceType::m7i_metal_24xl;
            return true;
          }
          else if (hashCode == m7i_metal_48xl_HASH)
          {
            enumValue = InstanceType::m7i_metal_48xl;
            return true;
          }
          else if (hashCode == r7i_metal_24xl_HASH)
          {
            enumValue = InstanceType::r7i_metal_24xl;
            return true;
          }
          else if (hashCode == r7i_metal_48xl_HASH)
          {
            enumValue = InstanceType::r7i_metal_48xl;
            return true;
          }
          else if (hashCode == r7iz_metal_16xl_HASH)
          {
            enumValue = InstanceType::r7iz_metal_16xl;
            return true;
          }
          else if (hashCode == r7iz_metal_32xl_HASH)
          {
            enumValue = InstanceType::r7iz_metal_32xl;
            return true;
          }
          else if (hashCode == c7gd_metal_HASH)
          {
            enumValue = InstanceType::c7gd_metal;
            return true;
          }
          else if (hashCode == m7gd_metal_HASH)
          {
            enumValue = InstanceType::m7gd_metal;
            return true;
          }
          else if (hashCode == r7gd_metal_HASH)
          {
            enumValue = InstanceType::r7gd_metal;
            return true;
          }
          else if (hashCode == g6_xlarge_HASH)
          {
            enumValue = InstanceType::g6_xlarge;
            return true;
          }
          else if (hashCode == g6_2xlarge_HASH)
          {
            enumValue = InstanceType::g6_2xlarge;
            return true;
          }
          else if (hashCode == g6_4xlarge_HASH)
          {
            enumValue = InstanceType::g6_4xlarge;
            return true;
          }
          else if (hashCode == g6_8xlarge_HASH)
          {
            enumValue = InstanceType::g6_8xlarge;
            return true;
          }
          else if (hashCode == g6_12xlarge_HASH)
          {
            enumValue = InstanceType::g6_12xlarge;
            return true;
          }
          else if (hashCode == g6_16xlarge_HASH)
          {
            enumValue = InstanceType::g6_16xlarge;
            return true;
          }
          else if (hashCode == g6_24xlarge_HASH)
          {
            enumValue = InstanceType::g6_24xlarge;
            return true;
          }
          else if (hashCode == g6_48xlarge_HASH)
          {
            enumValue = InstanceType::g6_48xlarge;
            return true;
          }
          else if (hashCode == gr6_4xlarge_HASH)
          {
            enumValue = InstanceType::gr6_4xlarge;
            return true;
          }
          else if (hashCode == gr6_8xlarge_HASH)
          {
            enumValue = InstanceType::gr6_8xlarge;
            return true;
          }
          else if (hashCode == c7i_flex_large_HASH)
          {
            enumValue = InstanceType::c7i_flex_large;
            return true;
          }
          else if (hashCode == c7i_flex_xlarge_HASH)
          {
            enumValue = InstanceType::c7i_flex_xlarge;
            return true;
          }
          else if (hashCode == c7i_flex_2xlarge_HASH)
          {
            enumValue = InstanceType::c7i_flex_2xlarge;
            return true;
          }
          else if (hashCode == c7i_flex_4xlarge_HASH)
          {
            enumValue = InstanceType::c7i_flex_4xlarge;
            return true;
          }
          else if (hashCode == c7i_flex_8xlarge_HASH)
          {
            enumValue = InstanceType::c7i_flex_8xlarge;
            return true;
          }
          else if (hashCode == u7i_12tb_224xlarge_HASH)
          {
            enumValue = InstanceType::u7i_12tb_224xlarge;
            return true;
          }
          else if (hashCode == u7in_16tb_224xlarge_HASH)
          {
            enumValue = InstanceType::u7in_16tb_224xlarge;
            return true;
          }
          else if (hashCode == u7in_24tb_224xlarge_HASH)
          {
            enumValue = InstanceType::u7in_24tb_224xlarge;
            return true;
          }
          else if (hashCode == u7in_32tb_224xlarge_HASH)
          {
            enumValue = InstanceType::u7in_32tb_224xlarge;
            return true;
          }
          else if (hashCode == u7ib_12tb_224xlarge_HASH)
          {
            enumValue = InstanceType::u7ib_12tb_224xlarge;
            return true;
          }
          else if (hashCode == c7gn_metal_HASH)
          {
            enumValue = InstanceType::c7gn_metal;
            return true;
          }
          else if (hashCode == r8g_medium_HASH)
          {
            enumValue = InstanceType::r8g_medium;
            return true;
          }
          else if (hashCode == r8g_large_HASH)
          {
            enumValue = InstanceType::r8g_large;
            return true;
          }
          else if (hashCode == r8g_xlarge_HASH)
          {
            enumValue = InstanceType::r8g_xlarge;
            return true;
          }
          else if (hashCode == r8g_2xlarge_HASH)
          {
            enumValue = InstanceType::r8g_2xlarge;
            return true;
          }
          else if (hashCode == r8g_4xlarge_HASH)
          {
            enumValue = InstanceType::r8g_4xlarge;
            return true;
          }
          else if (hashCode == r8g_8xlarge_HASH)
          {
            enumValue = InstanceType::r8g_8xlarge;
            return true;
          }
          else if (hashCode == r8g_12xlarge_HASH)
          {
            enumValue = InstanceType::r8g_12xlarge;
            return true;
          }
          else if (hashCode == r8g_16xlarge_HASH)
          {
            enumValue = InstanceType::r8g_16xlarge;
            return true;
          }
          else if (hashCode == r8g_24xlarge_HASH)
          {
            enumValue = InstanceType::r8g_24xlarge;
            return true;
          }
          else if (hashCode == r8g_48xlarge_HASH)
          {
            enumValue = InstanceType::r8g_48xlarge;
            return true;
          }
          else if (hashCode == r8g_metal_24xl_HASH)
          {
            enumValue = InstanceType::r8g_metal_24xl;
            return true;
          }
          else if (hashCode == r8g_metal_48xl_HASH)
          {
            enumValue = InstanceType::r8g_metal_48xl;
            return true;
          }
          else if (hashCode == mac2_m1ultra_metal_HASH)
          {
            enumValue = InstanceType::mac2_m1ultra_metal;
            return true;
          }
          else if (hashCode == g6e_xlarge_HASH)
          {
            enumValue = InstanceType::g6e_xlarge;
            return true;
          }
          else if (hashCode == g6e_2xlarge_HASH)
          {
            enumValue = InstanceType::g6e_2xlarge;
            return true;
          }
          else if (hashCode == g6e_4xlarge_HASH)
          {
            enumValue = InstanceType::g6e_4xlarge;
            return true;
          }
          else if (hashCode == g6e_8xlarge_HASH)
          {
            enumValue = InstanceType::g6e_8xlarge;
            return true;
          }
          else if (hashCode == g6e_12xlarge_HASH)
          {
            enumValue = InstanceType::g6e_12xlarge;
            return true;
          }
          else if (hashCode == g6e_16xlarge_HASH)
          {
            enumValue = InstanceType::g6e_16xlarge;
            return true;
          }
          else if (hashCode == g6e_24xlarge_HASH)
          {
            enumValue = InstanceType::g6e_24xlarge;
            return true;
          }
          else if (hashCode == g6e_48xlarge_HASH)
          {
            enumValue = InstanceType::g6e_48xlarge;
            return true;
          }
          else if (hashCode == c8g_medium_HASH)
          {
            enumValue = InstanceType::c8g_medium;
            return true;
          }
          else if (hashCode == c8g_large_HASH)
          {
            enumValue = InstanceType::c8g_large;
            return true;
          }
          else if (hashCode == c8g_xlarge_HASH)
          {
            enumValue = InstanceType::c8g_xlarge;
            return true;
          }
          else if (hashCode == c8g_2xlarge_HASH)
          {
            enumValue = InstanceType::c8g_2xlarge;
            return true;
          }
          else if (hashCode == c8g_4xlarge_HASH)
          {
            enumValue = InstanceType::c8g_4xlarge;
            return true;
          }
          else if (hashCode == c8g_8xlarge_HASH)
          {
            enumValue = InstanceType::c8g_8xlarge;
            return true;
          }
          else if (hashCode == c8g_12xlarge_HASH)
          {
            enumValue = InstanceType::c8g_12xlarge;
            return true;
          }
          else if (hashCode == c8g_16xlarge_HASH)
          {
            enumValue = InstanceType::c8g_16xlarge;
            return true;
          }
          else if (hashCode == c8g_24xlarge_HASH)
          {
            enumValue = InstanceType::c8g_24xlarge;
            return true;
          }
          else if (hashCode == c8g_48xlarge_HASH)
          {
            enumValue = InstanceType::c8g_48xlarge;
            return true;
          }
          else if (hashCode == c8g_metal_24xl_HASH)
          {
            enumValue = InstanceType::c8g_metal_24xl;
            return true;
          }
          else if (hashCode == c8g_metal_48xl_HASH)
          {
            enumValue = InstanceType::c8g_metal_48xl;
            return true;
          }
          else if (hashCode == m8g_medium_HASH)
          {
            enumValue = InstanceType::m8g_medium;
            return true;
          }
          else if (hashCode == m8g_large_HASH)
          {
            enumValue = InstanceType::m8g_large;
            return true;
          }
          else if (hashCode == m8g_xlarge_HASH)
          {
            enumValue = InstanceType::m8g_xlarge;
            return true;
          }
          else if (hashCode == m8g_2xlarge_HASH)
          {
            enumValue = InstanceType::m8g_2xlarge;
            return true;
          }
          else if (hashCode == m8g_4xlarge_HASH)
          {
            enumValue = InstanceType::m8g_4xlarge;
            return true;
          }
          else if (hashCode == m8g_8xlarge_HASH)
          {
            enumValue = InstanceType::m8g_8xlarge;
            return true;
          }
          else if (hashCode == m8g_12xlarge_HASH)
          {
            enumValue = InstanceType::m8g_12xlarge;
            return true;
          }
          else if (hashCode == m8g_16xlarge_HASH)
          {
            enumValue = InstanceType::m8g_16xlarge;
            return true;
          }
          else if (hashCode == m8g_24xlarge_HASH)
          {
            enumValue = InstanceType::m8g_24xlarge;
            return true;
          }
          else if (hashCode == m8g_48xlarge_HASH)
          {
            enumValue = InstanceType::m8g_48xlarge;
            return true;
          }
          else if (hashCode == m8g_metal_24xl_HASH)
          {
            enumValue = InstanceType::m8g_metal_24xl;
            return true;
          }
          else if (hashCode == m8g_metal_48xl_HASH)
          {
            enumValue = InstanceType::m8g_metal_48xl;
            return true;
          }
          else if (hashCode == x8g_medium_HASH)
          {
            enumValue = InstanceType::x8g_medium;
            return true;
          }
          else if (hashCode == x8g_large_HASH)
          {
            enumValue = InstanceType::x8g_large;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper7(int hashCode, InstanceType& enumValue)
        {
          if (hashCode == x8g_xlarge_HASH)
          {
            enumValue = InstanceType::x8g_xlarge;
            return true;
          }
          else if (hashCode == x8g_2xlarge_HASH)
          {
            enumValue = InstanceType::x8g_2xlarge;
            return true;
          }
          else if (hashCode == x8g_4xlarge_HASH)
          {
            enumValue = InstanceType::x8g_4xlarge;
            return true;
          }
          else if (hashCode == x8g_8xlarge_HASH)
          {
            enumValue = InstanceType::x8g_8xlarge;
            return true;
          }
          else if (hashCode == x8g_12xlarge_HASH)
          {
            enumValue = InstanceType::x8g_12xlarge;
            return true;
          }
          else if (hashCode == x8g_16xlarge_HASH)
          {
            enumValue = InstanceType::x8g_16xlarge;
            return true;
          }
          else if (hashCode == x8g_24xlarge_HASH)
          {
            enumValue = InstanceType::x8g_24xlarge;
            return true;
          }
          else if (hashCode == x8g_48xlarge_HASH)
          {
            enumValue = InstanceType::x8g_48xlarge;
            return true;
          }
          else if (hashCode == x8g_metal_24xl_HASH)
          {
            enumValue = InstanceType::x8g_metal_24xl;
            return true;
          }
          else if (hashCode == x8g_metal_48xl_HASH)
          {
            enumValue = InstanceType::x8g_metal_48xl;
            return true;
          }
          else if (hashCode == i7ie_large_HASH)
          {
            enumValue = InstanceType::i7ie_large;
            return true;
          }
          else if (hashCode == i7ie_xlarge_HASH)
          {
            enumValue = InstanceType::i7ie_xlarge;
            return true;
          }
          else if (hashCode == i7ie_2xlarge_HASH)
          {
            enumValue = InstanceType::i7ie_2xlarge;
            return true;
          }
          else if (hashCode == i7ie_3xlarge_HASH)
          {
            enumValue = InstanceType::i7ie_3xlarge;
            return true;
          }
          else if (hashCode == i7ie_6xlarge_HASH)
          {
            enumValue = InstanceType::i7ie_6xlarge;
            return true;
          }
          else if (hashCode == i7ie_12xlarge_HASH)
          {
            enumValue = InstanceType::i7ie_12xlarge;
            return true;
          }
          else if (hashCode == i7ie_18xlarge_HASH)
          {
            enumValue = InstanceType::i7ie_18xlarge;
            return true;
          }
          else if (hashCode == i7ie_24xlarge_HASH)
          {
            enumValue = InstanceType::i7ie_24xlarge;
            return true;
          }
          else if (hashCode == i7ie_48xlarge_HASH)
          {
            enumValue = InstanceType::i7ie_48xlarge;
            return true;
          }
          else if (hashCode == i8g_large_HASH)
          {
            enumValue = InstanceType::i8g_large;
            return true;
          }
          else if (hashCode == i8g_xlarge_HASH)
          {
            enumValue = InstanceType::i8g_xlarge;
            return true;
          }
          else if (hashCode == i8g_2xlarge_HASH)
          {
            enumValue = InstanceType::i8g_2xlarge;
            return true;
          }
          else if (hashCode == i8g_4xlarge_HASH)
          {
            enumValue = InstanceType::i8g_4xlarge;
            return true;
          }
          else if (hashCode == i8g_8xlarge_HASH)
          {
            enumValue = InstanceType::i8g_8xlarge;
            return true;
          }
          else if (hashCode == i8g_12xlarge_HASH)
          {
            enumValue = InstanceType::i8g_12xlarge;
            return true;
          }
          else if (hashCode == i8g_16xlarge_HASH)
          {
            enumValue = InstanceType::i8g_16xlarge;
            return true;
          }
          else if (hashCode == i8g_24xlarge_HASH)
          {
            enumValue = InstanceType::i8g_24xlarge;
            return true;
          }
          else if (hashCode == i8g_metal_24xl_HASH)
          {
            enumValue = InstanceType::i8g_metal_24xl;
            return true;
          }
          else if (hashCode == u7i_6tb_112xlarge_HASH)
          {
            enumValue = InstanceType::u7i_6tb_112xlarge;
            return true;
          }
          else if (hashCode == u7i_8tb_112xlarge_HASH)
          {
            enumValue = InstanceType::u7i_8tb_112xlarge;
            return true;
          }
          else if (hashCode == u7inh_32tb_480xlarge_HASH)
          {
            enumValue = InstanceType::u7inh_32tb_480xlarge;
            return true;
          }
          else if (hashCode == p5e_48xlarge_HASH)
          {
            enumValue = InstanceType::p5e_48xlarge;
            return true;
          }
          else if (hashCode == p5en_48xlarge_HASH)
          {
            enumValue = InstanceType::p5en_48xlarge;
            return true;
          }
          else if (hashCode == f2_12xlarge_HASH)
          {
            enumValue = InstanceType::f2_12xlarge;
            return true;
          }
          else if (hashCode == f2_48xlarge_HASH)
          {
            enumValue = InstanceType::f2_48xlarge;
            return true;
          }
          else if (hashCode == trn2_48xlarge_HASH)
          {
            enumValue = InstanceType::trn2_48xlarge;
            return true;
          }
          else if (hashCode == c7i_flex_12xlarge_HASH)
          {
            enumValue = InstanceType::c7i_flex_12xlarge;
            return true;
          }
          else if (hashCode == c7i_flex_16xlarge_HASH)
          {
            enumValue = InstanceType::c7i_flex_16xlarge;
            return true;
          }
          else if (hashCode == m7i_flex_12xlarge_HASH)
          {
            enumValue = InstanceType::m7i_flex_12xlarge;
            return true;
          }
          else if (hashCode == m7i_flex_16xlarge_HASH)
          {
            enumValue = InstanceType::m7i_flex_16xlarge;
            return true;
          }
          else if (hashCode == i7ie_metal_24xl_HASH)
          {
            enumValue = InstanceType::i7ie_metal_24xl;
            return true;
          }
          else if (hashCode == i7ie_metal_48xl_HASH)
          {
            enumValue = InstanceType::i7ie_metal_48xl;
            return true;
          }
          else if (hashCode == i8g_48xlarge_HASH)
          {
            enumValue = InstanceType::i8g_48xlarge;
            return true;
          }
          else if (hashCode == c8gd_medium_HASH)
          {
            enumValue = InstanceType::c8gd_medium;
            return true;
          }
          else if (hashCode == c8gd_large_HASH)
          {
            enumValue = InstanceType::c8gd_large;
            return true;
          }
          else if (hashCode == c8gd_xlarge_HASH)
          {
            enumValue = InstanceType::c8gd_xlarge;
            return true;
          }
          else if (hashCode == c8gd_2xlarge_HASH)
          {
            enumValue = InstanceType::c8gd_2xlarge;
            return true;
          }
          else if (hashCode == c8gd_4xlarge_HASH)
          {
            enumValue = InstanceType::c8gd_4xlarge;
            return true;
          }
          else if (hashCode == c8gd_8xlarge_HASH)
          {
            enumValue = InstanceType::c8gd_8xlarge;
            return true;
          }
          else if (hashCode == c8gd_12xlarge_HASH)
          {
            enumValue = InstanceType::c8gd_12xlarge;
            return true;
          }
          else if (hashCode == c8gd_16xlarge_HASH)
          {
            enumValue = InstanceType::c8gd_16xlarge;
            return true;
          }
          else if (hashCode == c8gd_24xlarge_HASH)
          {
            enumValue = InstanceType::c8gd_24xlarge;
            return true;
          }
          else if (hashCode == c8gd_48xlarge_HASH)
          {
            enumValue = InstanceType::c8gd_48xlarge;
            return true;
          }
          else if (hashCode == c8gd_metal_24xl_HASH)
          {
            enumValue = InstanceType::c8gd_metal_24xl;
            return true;
          }
          else if (hashCode == c8gd_metal_48xl_HASH)
          {
            enumValue = InstanceType::c8gd_metal_48xl;
            return true;
          }
          else if (hashCode == i7i_large_HASH)
          {
            enumValue = InstanceType::i7i_large;
            return true;
          }
          else if (hashCode == i7i_xlarge_HASH)
          {
            enumValue = InstanceType::i7i_xlarge;
            return true;
          }
          else if (hashCode == i7i_2xlarge_HASH)
          {
            enumValue = InstanceType::i7i_2xlarge;
            return true;
          }
          else if (hashCode == i7i_4xlarge_HASH)
          {
            enumValue = InstanceType::i7i_4xlarge;
            return true;
          }
          else if (hashCode == i7i_8xlarge_HASH)
          {
            enumValue = InstanceType::i7i_8xlarge;
            return true;
          }
          else if (hashCode == i7i_12xlarge_HASH)
          {
            enumValue = InstanceType::i7i_12xlarge;
            return true;
          }
          else if (hashCode == i7i_16xlarge_HASH)
          {
            enumValue = InstanceType::i7i_16xlarge;
            return true;
          }
          else if (hashCode == i7i_24xlarge_HASH)
          {
            enumValue = InstanceType::i7i_24xlarge;
            return true;
          }
          else if (hashCode == i7i_48xlarge_HASH)
          {
            enumValue = InstanceType::i7i_48xlarge;
            return true;
          }
          else if (hashCode == i7i_metal_24xl_HASH)
          {
            enumValue = InstanceType::i7i_metal_24xl;
            return true;
          }
          else if (hashCode == i7i_metal_48xl_HASH)
          {
            enumValue = InstanceType::i7i_metal_48xl;
            return true;
          }
          else if (hashCode == p6_b200_48xlarge_HASH)
          {
            enumValue = InstanceType::p6_b200_48xlarge;
            return true;
          }
          else if (hashCode == m8gd_medium_HASH)
          {
            enumValue = InstanceType::m8gd_medium;
            return true;
          }
          else if (hashCode == m8gd_large_HASH)
          {
            enumValue = InstanceType::m8gd_large;
            return true;
          }
          else if (hashCode == m8gd_xlarge_HASH)
          {
            enumValue = InstanceType::m8gd_xlarge;
            return true;
          }
          else if (hashCode == m8gd_2xlarge_HASH)
          {
            enumValue = InstanceType::m8gd_2xlarge;
            return true;
          }
          else if (hashCode == m8gd_4xlarge_HASH)
          {
            enumValue = InstanceType::m8gd_4xlarge;
            return true;
          }
          else if (hashCode == m8gd_8xlarge_HASH)
          {
            enumValue = InstanceType::m8gd_8xlarge;
            return true;
          }
          else if (hashCode == m8gd_12xlarge_HASH)
          {
            enumValue = InstanceType::m8gd_12xlarge;
            return true;
          }
          else if (hashCode == m8gd_16xlarge_HASH)
          {
            enumValue = InstanceType::m8gd_16xlarge;
            return true;
          }
          else if (hashCode == m8gd_24xlarge_HASH)
          {
            enumValue = InstanceType::m8gd_24xlarge;
            return true;
          }
          else if (hashCode == m8gd_48xlarge_HASH)
          {
            enumValue = InstanceType::m8gd_48xlarge;
            return true;
          }
          else if (hashCode == m8gd_metal_24xl_HASH)
          {
            enumValue = InstanceType::m8gd_metal_24xl;
            return true;
          }
          else if (hashCode == m8gd_metal_48xl_HASH)
          {
            enumValue = InstanceType::m8gd_metal_48xl;
            return true;
          }
          else if (hashCode == r8gd_medium_HASH)
          {
            enumValue = InstanceType::r8gd_medium;
            return true;
          }
          else if (hashCode == r8gd_large_HASH)
          {
            enumValue = InstanceType::r8gd_large;
            return true;
          }
          else if (hashCode == r8gd_xlarge_HASH)
          {
            enumValue = InstanceType::r8gd_xlarge;
            return true;
          }
          else if (hashCode == r8gd_2xlarge_HASH)
          {
            enumValue = InstanceType::r8gd_2xlarge;
            return true;
          }
          else if (hashCode == r8gd_4xlarge_HASH)
          {
            enumValue = InstanceType::r8gd_4xlarge;
            return true;
          }
          else if (hashCode == r8gd_8xlarge_HASH)
          {
            enumValue = InstanceType::r8gd_8xlarge;
            return true;
          }
          else if (hashCode == r8gd_12xlarge_HASH)
          {
            enumValue = InstanceType::r8gd_12xlarge;
            return true;
          }
          else if (hashCode == r8gd_16xlarge_HASH)
          {
            enumValue = InstanceType::r8gd_16xlarge;
            return true;
          }
          else if (hashCode == r8gd_24xlarge_HASH)
          {
            enumValue = InstanceType::r8gd_24xlarge;
            return true;
          }
          else if (hashCode == r8gd_48xlarge_HASH)
          {
            enumValue = InstanceType::r8gd_48xlarge;
            return true;
          }
          else if (hashCode == r8gd_metal_24xl_HASH)
          {
            enumValue = InstanceType::r8gd_metal_24xl;
            return true;
          }
          else if (hashCode == r8gd_metal_48xl_HASH)
          {
            enumValue = InstanceType::r8gd_metal_48xl;
            return true;
          }
          else if (hashCode == c8gn_medium_HASH)
          {
            enumValue = InstanceType::c8gn_medium;
            return true;
          }
          else if (hashCode == c8gn_large_HASH)
          {
            enumValue = InstanceType::c8gn_large;
            return true;
          }
          else if (hashCode == c8gn_xlarge_HASH)
          {
            enumValue = InstanceType::c8gn_xlarge;
            return true;
          }
          else if (hashCode == c8gn_2xlarge_HASH)
          {
            enumValue = InstanceType::c8gn_2xlarge;
            return true;
          }
          else if (hashCode == c8gn_4xlarge_HASH)
          {
            enumValue = InstanceType::c8gn_4xlarge;
            return true;
          }
          else if (hashCode == c8gn_8xlarge_HASH)
          {
            enumValue = InstanceType::c8gn_8xlarge;
            return true;
          }
          else if (hashCode == c8gn_12xlarge_HASH)
          {
            enumValue = InstanceType::c8gn_12xlarge;
            return true;
          }
          else if (hashCode == c8gn_16xlarge_HASH)
          {
            enumValue = InstanceType::c8gn_16xlarge;
            return true;
          }
          else if (hashCode == c8gn_24xlarge_HASH)
          {
            enumValue = InstanceType::c8gn_24xlarge;
            return true;
          }
          else if (hashCode == c8gn_48xlarge_HASH)
          {
            enumValue = InstanceType::c8gn_48xlarge;
            return true;
          }
          else if (hashCode == c8gn_metal_24xl_HASH)
          {
            enumValue = InstanceType::c8gn_metal_24xl;
            return true;
          }
          else if (hashCode == c8gn_metal_48xl_HASH)
          {
            enumValue = InstanceType::c8gn_metal_48xl;
            return true;
          }
          else if (hashCode == f2_6xlarge_HASH)
          {
            enumValue = InstanceType::f2_6xlarge;
            return true;
          }
          else if (hashCode == p6e_gb200_36xlarge_HASH)
          {
            enumValue = InstanceType::p6e_gb200_36xlarge;
            return true;
          }
          return false;
        }

        static bool GetNameForEnumHelper0(InstanceType enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case InstanceType::a1_medium:
            value = "a1.medium";
            return true;
          case InstanceType::a1_large:
            value = "a1.large";
            return true;
          case InstanceType::a1_xlarge:
            value = "a1.xlarge";
            return true;
          case InstanceType::a1_2xlarge:
            value = "a1.2xlarge";
            return true;
          case InstanceType::a1_4xlarge:
            value = "a1.4xlarge";
            return true;
          case InstanceType::a1_metal:
            value = "a1.metal";
            return true;
          case InstanceType::c1_medium:
            value = "c1.medium";
            return true;
          case InstanceType::c1_xlarge:
            value = "c1.xlarge";
            return true;
          case InstanceType::c3_large:
            value = "c3.large";
            return true;
          case InstanceType::c3_xlarge:
            value = "c3.xlarge";
            return true;
          case InstanceType::c3_2xlarge:
            value = "c3.2xlarge";
            return true;
          case InstanceType::c3_4xlarge:
            value = "c3.4xlarge";
            return true;
          case InstanceType::c3_8xlarge:
            value = "c3.8xlarge";
            return true;
          case InstanceType::c4_large:
            value = "c4.large";
            return true;
          case InstanceType::c4_xlarge:
            value = "c4.xlarge";
            return true;
          case InstanceType::c4_2xlarge:
            value = "c4.2xlarge";
            return true;
          case InstanceType::c4_4xlarge:
            value = "c4.4xlarge";
            return true;
          case InstanceType::c4_8xlarge:
            value = "c4.8xlarge";
            return true;
          case InstanceType::c5_large:
            value = "c5.large";
            return true;
          case InstanceType::c5_xlarge:
            value = "c5.xlarge";
            return true;
          case InstanceType::c5_2xlarge:
            value = "c5.2xlarge";
            return true;
          case InstanceType::c5_4xlarge:
            value = "c5.4xlarge";
            return true;
          case InstanceType::c5_9xlarge:
            value = "c5.9xlarge";
            return true;
          case InstanceType::c5_12xlarge:
            value = "c5.12xlarge";
            return true;
          case InstanceType::c5_18xlarge:
            value = "c5.18xlarge";
            return true;
          case InstanceType::c5_24xlarge:
            value = "c5.24xlarge";
            return true;
          case InstanceType::c5_metal:
            value = "c5.metal";
            return true;
          case InstanceType::c5a_large:
            value = "c5a.large";
            return true;
          case InstanceType::c5a_xlarge:
            value = "c5a.xlarge";
            return true;
          case InstanceType::c5a_2xlarge:
            value = "c5a.2xlarge";
            return true;
          case InstanceType::c5a_4xlarge:
            value = "c5a.4xlarge";
            return true;
          case InstanceType::c5a_8xlarge:
            value = "c5a.8xlarge";
            return true;
          case InstanceType::c5a_12xlarge:
            value = "c5a.12xlarge";
            return true;
          case InstanceType::c5a_16xlarge:
            value = "c5a.16xlarge";
            return true;
          case InstanceType::c5a_24xlarge:
            value = "c5a.24xlarge";
            return true;
          case InstanceType::c5ad_large:
            value = "c5ad.large";
            return true;
          case InstanceType::c5ad_xlarge:
            value = "c5ad.xlarge";
            return true;
          case InstanceType::c5ad_2xlarge:
            value = "c5ad.2xlarge";
            return true;
          case InstanceType::c5ad_4xlarge:
            value = "c5ad.4xlarge";
            return true;
          case InstanceType::c5ad_8xlarge:
            value = "c5ad.8xlarge";
            return true;
          case InstanceType::c5ad_12xlarge:
            value = "c5ad.12xlarge";
            return true;
          case InstanceType::c5ad_16xlarge:
            value = "c5ad.16xlarge";
            return true;
          case InstanceType::c5ad_24xlarge:
            value = "c5ad.24xlarge";
            return true;
          case InstanceType::c5d_large:
            value = "c5d.large";
            return true;
          case InstanceType::c5d_xlarge:
            value = "c5d.xlarge";
            return true;
          case InstanceType::c5d_2xlarge:
            value = "c5d.2xlarge";
            return true;
          case InstanceType::c5d_4xlarge:
            value = "c5d.4xlarge";
            return true;
          case InstanceType::c5d_9xlarge:
            value = "c5d.9xlarge";
            return true;
          case InstanceType::c5d_12xlarge:
            value = "c5d.12xlarge";
            return true;
          case InstanceType::c5d_18xlarge:
            value = "c5d.18xlarge";
            return true;
          case InstanceType::c5d_24xlarge:
            value = "c5d.24xlarge";
            return true;
          case InstanceType::c5d_metal:
            value = "c5d.metal";
            return true;
          case InstanceType::c5n_large:
            value = "c5n.large";
            return true;
          case InstanceType::c5n_xlarge:
            value = "c5n.xlarge";
            return true;
          case InstanceType::c5n_2xlarge:
            value = "c5n.2xlarge";
            return true;
          case InstanceType::c5n_4xlarge:
            value = "c5n.4xlarge";
            return true;
          case InstanceType::c5n_9xlarge:
            value = "c5n.9xlarge";
            return true;
          case InstanceType::c5n_18xlarge:
            value = "c5n.18xlarge";
            return true;
          case InstanceType::c5n_metal:
            value = "c5n.metal";
            return true;
          case InstanceType::c6g_medium:
            value = "c6g.medium";
            return true;
          case InstanceType::c6g_large:
            value = "c6g.large";
            return true;
          case InstanceType::c6g_xlarge:
            value = "c6g.xlarge";
            return true;
          case InstanceType::c6g_2xlarge:
            value = "c6g.2xlarge";
            return true;
          case InstanceType::c6g_4xlarge:
            value = "c6g.4xlarge";
            return true;
          case InstanceType::c6g_8xlarge:
            value = "c6g.8xlarge";
            return true;
          case InstanceType::c6g_12xlarge:
            value = "c6g.12xlarge";
            return true;
          case InstanceType::c6g_16xlarge:
            value = "c6g.16xlarge";
            return true;
          case InstanceType::c6g_metal:
            value = "c6g.metal";
            return true;
          case InstanceType::c6gd_medium:
            value = "c6gd.medium";
            return true;
          case InstanceType::c6gd_large:
            value = "c6gd.large";
            return true;
          case InstanceType::c6gd_xlarge:
            value = "c6gd.xlarge";
            return true;
          case InstanceType::c6gd_2xlarge:
            value = "c6gd.2xlarge";
            return true;
          case InstanceType::c6gd_4xlarge:
            value = "c6gd.4xlarge";
            return true;
          case InstanceType::c6gd_8xlarge:
            value = "c6gd.8xlarge";
            return true;
          case InstanceType::c6gd_12xlarge:
            value = "c6gd.12xlarge";
            return true;
          case InstanceType::c6gd_16xlarge:
            value = "c6gd.16xlarge";
            return true;
          case InstanceType::c6gd_metal:
            value = "c6gd.metal";
            return true;
          case InstanceType::c6gn_medium:
            value = "c6gn.medium";
            return true;
          case InstanceType::c6gn_large:
            value = "c6gn.large";
            return true;
          case InstanceType::c6gn_xlarge:
            value = "c6gn.xlarge";
            return true;
          case InstanceType::c6gn_2xlarge:
            value = "c6gn.2xlarge";
            return true;
          case InstanceType::c6gn_4xlarge:
            value = "c6gn.4xlarge";
            return true;
          case InstanceType::c6gn_8xlarge:
            value = "c6gn.8xlarge";
            return true;
          case InstanceType::c6gn_12xlarge:
            value = "c6gn.12xlarge";
            return true;
          case InstanceType::c6gn_16xlarge:
            value = "c6gn.16xlarge";
            return true;
          case InstanceType::c6i_large:
            value = "c6i.large";
            return true;
          case InstanceType::c6i_xlarge:
            value = "c6i.xlarge";
            return true;
          case InstanceType::c6i_2xlarge:
            value = "c6i.2xlarge";
            return true;
          case InstanceType::c6i_4xlarge:
            value = "c6i.4xlarge";
            return true;
          case InstanceType::c6i_8xlarge:
            value = "c6i.8xlarge";
            return true;
          case InstanceType::c6i_12xlarge:
            value = "c6i.12xlarge";
            return true;
          case InstanceType::c6i_16xlarge:
            value = "c6i.16xlarge";
            return true;
          case InstanceType::c6i_24xlarge:
            value = "c6i.24xlarge";
            return true;
          case InstanceType::c6i_32xlarge:
            value = "c6i.32xlarge";
            return true;
          case InstanceType::c6i_metal:
            value = "c6i.metal";
            return true;
          case InstanceType::cc1_4xlarge:
            value = "cc1.4xlarge";
            return true;
          case InstanceType::cc2_8xlarge:
            value = "cc2.8xlarge";
            return true;
          case InstanceType::cg1_4xlarge:
            value = "cg1.4xlarge";
            return true;
          case InstanceType::cr1_8xlarge:
            value = "cr1.8xlarge";
            return true;
          case InstanceType::d2_xlarge:
            value = "d2.xlarge";
            return true;
          case InstanceType::d2_2xlarge:
            value = "d2.2xlarge";
            return true;
          case InstanceType::d2_4xlarge:
            value = "d2.4xlarge";
            return true;
          case InstanceType::d2_8xlarge:
            value = "d2.8xlarge";
            return true;
          case InstanceType::d3_xlarge:
            value = "d3.xlarge";
            return true;
          case InstanceType::d3_2xlarge:
            value = "d3.2xlarge";
            return true;
          case InstanceType::d3_4xlarge:
            value = "d3.4xlarge";
            return true;
          case InstanceType::d3_8xlarge:
            value = "d3.8xlarge";
            return true;
          case InstanceType::d3en_xlarge:
            value = "d3en.xlarge";
            return true;
          case InstanceType::d3en_2xlarge:
            value = "d3en.2xlarge";
            return true;
          case InstanceType::d3en_4xlarge:
            value = "d3en.4xlarge";
            return true;
          case InstanceType::d3en_6xlarge:
            value = "d3en.6xlarge";
            return true;
          case InstanceType::d3en_8xlarge:
            value = "d3en.8xlarge";
            return true;
          case InstanceType::d3en_12xlarge:
            value = "d3en.12xlarge";
            return true;
          case InstanceType::dl1_24xlarge:
            value = "dl1.24xlarge";
            return true;
          case InstanceType::f1_2xlarge:
            value = "f1.2xlarge";
            return true;
          case InstanceType::f1_4xlarge:
            value = "f1.4xlarge";
            return true;
          case InstanceType::f1_16xlarge:
            value = "f1.16xlarge";
            return true;
          case InstanceType::g2_2xlarge:
            value = "g2.2xlarge";
            return true;
          case InstanceType::g2_8xlarge:
            value = "g2.8xlarge";
            return true;
          case InstanceType::g3_4xlarge:
            value = "g3.4xlarge";
            return true;
          case InstanceType::g3_8xlarge:
            value = "g3.8xlarge";
            return true;
          case InstanceType::g3_16xlarge:
            value = "g3.16xlarge";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper1(InstanceType enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case InstanceType::g3s_xlarge:
            value = "g3s.xlarge";
            return true;
          case InstanceType::g4ad_xlarge:
            value = "g4ad.xlarge";
            return true;
          case InstanceType::g4ad_2xlarge:
            value = "g4ad.2xlarge";
            return true;
          case InstanceType::g4ad_4xlarge:
            value = "g4ad.4xlarge";
            return true;
          case InstanceType::g4ad_8xlarge:
            value = "g4ad.8xlarge";
            return true;
          case InstanceType::g4ad_16xlarge:
            value = "g4ad.16xlarge";
            return true;
          case InstanceType::g4dn_xlarge:
            value = "g4dn.xlarge";
            return true;
          case InstanceType::g4dn_2xlarge:
            value = "g4dn.2xlarge";
            return true;
          case InstanceType::g4dn_4xlarge:
            value = "g4dn.4xlarge";
            return true;
          case InstanceType::g4dn_8xlarge:
            value = "g4dn.8xlarge";
            return true;
          case InstanceType::g4dn_12xlarge:
            value = "g4dn.12xlarge";
            return true;
          case InstanceType::g4dn_16xlarge:
            value = "g4dn.16xlarge";
            return true;
          case InstanceType::g4dn_metal:
            value = "g4dn.metal";
            return true;
          case InstanceType::g5_xlarge:
            value = "g5.xlarge";
            return true;
          case InstanceType::g5_2xlarge:
            value = "g5.2xlarge";
            return true;
          case InstanceType::g5_4xlarge:
            value = "g5.4xlarge";
            return true;
          case InstanceType::g5_8xlarge:
            value = "g5.8xlarge";
            return true;
          case InstanceType::g5_12xlarge:
            value = "g5.12xlarge";
            return true;
          case InstanceType::g5_16xlarge:
            value = "g5.16xlarge";
            return true;
          case InstanceType::g5_24xlarge:
            value = "g5.24xlarge";
            return true;
          case InstanceType::g5_48xlarge:
            value = "g5.48xlarge";
            return true;
          case InstanceType::g5g_xlarge:
            value = "g5g.xlarge";
            return true;
          case InstanceType::g5g_2xlarge:
            value = "g5g.2xlarge";
            return true;
          case InstanceType::g5g_4xlarge:
            value = "g5g.4xlarge";
            return true;
          case InstanceType::g5g_8xlarge:
            value = "g5g.8xlarge";
            return true;
          case InstanceType::g5g_16xlarge:
            value = "g5g.16xlarge";
            return true;
          case InstanceType::g5g_metal:
            value = "g5g.metal";
            return true;
          case InstanceType::hi1_4xlarge:
            value = "hi1.4xlarge";
            return true;
          case InstanceType::hpc6a_48xlarge:
            value = "hpc6a.48xlarge";
            return true;
          case InstanceType::hs1_8xlarge:
            value = "hs1.8xlarge";
            return true;
          case InstanceType::h1_2xlarge:
            value = "h1.2xlarge";
            return true;
          case InstanceType::h1_4xlarge:
            value = "h1.4xlarge";
            return true;
          case InstanceType::h1_8xlarge:
            value = "h1.8xlarge";
            return true;
          case InstanceType::h1_16xlarge:
            value = "h1.16xlarge";
            return true;
          case InstanceType::i2_xlarge:
            value = "i2.xlarge";
            return true;
          case InstanceType::i2_2xlarge:
            value = "i2.2xlarge";
            return true;
          case InstanceType::i2_4xlarge:
            value = "i2.4xlarge";
            return true;
          case InstanceType::i2_8xlarge:
            value = "i2.8xlarge";
            return true;
          case InstanceType::i3_large:
            value = "i3.large";
            return true;
          case InstanceType::i3_xlarge:
            value = "i3.xlarge";
            return true;
          case InstanceType::i3_2xlarge:
            value = "i3.2xlarge";
            return true;
          case InstanceType::i3_4xlarge:
            value = "i3.4xlarge";
            return true;
          case InstanceType::i3_8xlarge:
            value = "i3.8xlarge";
            return true;
          case InstanceType::i3_16xlarge:
            value = "i3.16xlarge";
            return true;
          case InstanceType::i3_metal:
            value = "i3.metal";
            return true;
          case InstanceType::i3en_large:
            value = "i3en.large";
            return true;
          case InstanceType::i3en_xlarge:
            value = "i3en.xlarge";
            return true;
          case InstanceType::i3en_2xlarge:
            value = "i3en.2xlarge";
            return true;
          case InstanceType::i3en_3xlarge:
            value = "i3en.3xlarge";
            return true;
          case InstanceType::i3en_6xlarge:
            value = "i3en.6xlarge";
            return true;
          case InstanceType::i3en_12xlarge:
            value = "i3en.12xlarge";
            return true;
          case InstanceType::i3en_24xlarge:
            value = "i3en.24xlarge";
            return true;
          case InstanceType::i3en_metal:
            value = "i3en.metal";
            return true;
          case InstanceType::im4gn_large:
            value = "im4gn.large";
            return true;
          case InstanceType::im4gn_xlarge:
            value = "im4gn.xlarge";
            return true;
          case InstanceType::im4gn_2xlarge:
            value = "im4gn.2xlarge";
            return true;
          case InstanceType::im4gn_4xlarge:
            value = "im4gn.4xlarge";
            return true;
          case InstanceType::im4gn_8xlarge:
            value = "im4gn.8xlarge";
            return true;
          case InstanceType::im4gn_16xlarge:
            value = "im4gn.16xlarge";
            return true;
          case InstanceType::inf1_xlarge:
            value = "inf1.xlarge";
            return true;
          case InstanceType::inf1_2xlarge:
            value = "inf1.2xlarge";
            return true;
          case InstanceType::inf1_6xlarge:
            value = "inf1.6xlarge";
            return true;
          case InstanceType::inf1_24xlarge:
            value = "inf1.24xlarge";
            return true;
          case InstanceType::is4gen_medium:
            value = "is4gen.medium";
            return true;
          case InstanceType::is4gen_large:
            value = "is4gen.large";
            return true;
          case InstanceType::is4gen_xlarge:
            value = "is4gen.xlarge";
            return true;
          case InstanceType::is4gen_2xlarge:
            value = "is4gen.2xlarge";
            return true;
          case InstanceType::is4gen_4xlarge:
            value = "is4gen.4xlarge";
            return true;
          case InstanceType::is4gen_8xlarge:
            value = "is4gen.8xlarge";
            return true;
          case InstanceType::m1_small:
            value = "m1.small";
            return true;
          case InstanceType::m1_medium:
            value = "m1.medium";
            return true;
          case InstanceType::m1_large:
            value = "m1.large";
            return true;
          case InstanceType::m1_xlarge:
            value = "m1.xlarge";
            return true;
          case InstanceType::m2_xlarge:
            value = "m2.xlarge";
            return true;
          case InstanceType::m2_2xlarge:
            value = "m2.2xlarge";
            return true;
          case InstanceType::m2_4xlarge:
            value = "m2.4xlarge";
            return true;
          case InstanceType::m3_medium:
            value = "m3.medium";
            return true;
          case InstanceType::m3_large:
            value = "m3.large";
            return true;
          case InstanceType::m3_xlarge:
            value = "m3.xlarge";
            return true;
          case InstanceType::m3_2xlarge:
            value = "m3.2xlarge";
            return true;
          case InstanceType::m4_large:
            value = "m4.large";
            return true;
          case InstanceType::m4_xlarge:
            value = "m4.xlarge";
            return true;
          case InstanceType::m4_2xlarge:
            value = "m4.2xlarge";
            return true;
          case InstanceType::m4_4xlarge:
            value = "m4.4xlarge";
            return true;
          case InstanceType::m4_10xlarge:
            value = "m4.10xlarge";
            return true;
          case InstanceType::m4_16xlarge:
            value = "m4.16xlarge";
            return true;
          case InstanceType::m5_large:
            value = "m5.large";
            return true;
          case InstanceType::m5_xlarge:
            value = "m5.xlarge";
            return true;
          case InstanceType::m5_2xlarge:
            value = "m5.2xlarge";
            return true;
          case InstanceType::m5_4xlarge:
            value = "m5.4xlarge";
            return true;
          case InstanceType::m5_8xlarge:
            value = "m5.8xlarge";
            return true;
          case InstanceType::m5_12xlarge:
            value = "m5.12xlarge";
            return true;
          case InstanceType::m5_16xlarge:
            value = "m5.16xlarge";
            return true;
          case InstanceType::m5_24xlarge:
            value = "m5.24xlarge";
            return true;
          case InstanceType::m5_metal:
            value = "m5.metal";
            return true;
          case InstanceType::m5a_large:
            value = "m5a.large";
            return true;
          case InstanceType::m5a_xlarge:
            value = "m5a.xlarge";
            return true;
          case InstanceType::m5a_2xlarge:
            value = "m5a.2xlarge";
            return true;
          case InstanceType::m5a_4xlarge:
            value = "m5a.4xlarge";
            return true;
          case InstanceType::m5a_8xlarge:
            value = "m5a.8xlarge";
            return true;
          case InstanceType::m5a_12xlarge:
            value = "m5a.12xlarge";
            return true;
          case InstanceType::m5a_16xlarge:
            value = "m5a.16xlarge";
            return true;
          case InstanceType::m5a_24xlarge:
            value = "m5a.24xlarge";
            return true;
          case InstanceType::m5ad_large:
            value = "m5ad.large";
            return true;
          case InstanceType::m5ad_xlarge:
            value = "m5ad.xlarge";
            return true;
          case InstanceType::m5ad_2xlarge:
            value = "m5ad.2xlarge";
            return true;
          case InstanceType::m5ad_4xlarge:
            value = "m5ad.4xlarge";
            return true;
          case InstanceType::m5ad_8xlarge:
            value = "m5ad.8xlarge";
            return true;
          case InstanceType::m5ad_12xlarge:
            value = "m5ad.12xlarge";
            return true;
          case InstanceType::m5ad_16xlarge:
            value = "m5ad.16xlarge";
            return true;
          case InstanceType::m5ad_24xlarge:
            value = "m5ad.24xlarge";
            return true;
          case InstanceType::m5d_large:
            value = "m5d.large";
            return true;
          case InstanceType::m5d_xlarge:
            value = "m5d.xlarge";
            return true;
          case InstanceType::m5d_2xlarge:
            value = "m5d.2xlarge";
            return true;
          case InstanceType::m5d_4xlarge:
            value = "m5d.4xlarge";
            return true;
          case InstanceType::m5d_8xlarge:
            value = "m5d.8xlarge";
            return true;
          case InstanceType::m5d_12xlarge:
            value = "m5d.12xlarge";
            return true;
          case InstanceType::m5d_16xlarge:
            value = "m5d.16xlarge";
            return true;
          case InstanceType::m5d_24xlarge:
            value = "m5d.24xlarge";
            return true;
          case InstanceType::m5d_metal:
            value = "m5d.metal";
            return true;
          case InstanceType::m5dn_large:
            value = "m5dn.large";
            return true;
          case InstanceType::m5dn_xlarge:
            value = "m5dn.xlarge";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper2(InstanceType enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case InstanceType::m5dn_2xlarge:
            value = "m5dn.2xlarge";
            return true;
          case InstanceType::m5dn_4xlarge:
            value = "m5dn.4xlarge";
            return true;
          case InstanceType::m5dn_8xlarge:
            value = "m5dn.8xlarge";
            return true;
          case InstanceType::m5dn_12xlarge:
            value = "m5dn.12xlarge";
            return true;
          case InstanceType::m5dn_16xlarge:
            value = "m5dn.16xlarge";
            return true;
          case InstanceType::m5dn_24xlarge:
            value = "m5dn.24xlarge";
            return true;
          case InstanceType::m5dn_metal:
            value = "m5dn.metal";
            return true;
          case InstanceType::m5n_large:
            value = "m5n.large";
            return true;
          case InstanceType::m5n_xlarge:
            value = "m5n.xlarge";
            return true;
          case InstanceType::m5n_2xlarge:
            value = "m5n.2xlarge";
            return true;
          case InstanceType::m5n_4xlarge:
            value = "m5n.4xlarge";
            return true;
          case InstanceType::m5n_8xlarge:
            value = "m5n.8xlarge";
            return true;
          case InstanceType::m5n_12xlarge:
            value = "m5n.12xlarge";
            return true;
          case InstanceType::m5n_16xlarge:
            value = "m5n.16xlarge";
            return true;
          case InstanceType::m5n_24xlarge:
            value = "m5n.24xlarge";
            return true;
          case InstanceType::m5n_metal:
            value = "m5n.metal";
            return true;
          case InstanceType::m5zn_large:
            value = "m5zn.large";
            return true;
          case InstanceType::m5zn_xlarge:
            value = "m5zn.xlarge";
            return true;
          case InstanceType::m5zn_2xlarge:
            value = "m5zn.2xlarge";
            return true;
          case InstanceType::m5zn_3xlarge:
            value = "m5zn.3xlarge";
            return true;
          case InstanceType::m5zn_6xlarge:
            value = "m5zn.6xlarge";
            return true;
          case InstanceType::m5zn_12xlarge:
            value = "m5zn.12xlarge";
            return true;
          case InstanceType::m5zn_metal:
            value = "m5zn.metal";
            return true;
          case InstanceType::m6a_large:
            value = "m6a.large";
            return true;
          case InstanceType::m6a_xlarge:
            value = "m6a.xlarge";
            return true;
          case InstanceType::m6a_2xlarge:
            value = "m6a.2xlarge";
            return true;
          case InstanceType::m6a_4xlarge:
            value = "m6a.4xlarge";
            return true;
          case InstanceType::m6a_8xlarge:
            value = "m6a.8xlarge";
            return true;
          case InstanceType::m6a_12xlarge:
            value = "m6a.12xlarge";
            return true;
          case InstanceType::m6a_16xlarge:
            value = "m6a.16xlarge";
            return true;
          case InstanceType::m6a_24xlarge:
            value = "m6a.24xlarge";
            return true;
          case InstanceType::m6a_32xlarge:
            value = "m6a.32xlarge";
            return true;
          case InstanceType::m6a_48xlarge:
            value = "m6a.48xlarge";
            return true;
          case InstanceType::m6g_metal:
            value = "m6g.metal";
            return true;
          case InstanceType::m6g_medium:
            value = "m6g.medium";
            return true;
          case InstanceType::m6g_large:
            value = "m6g.large";
            return true;
          case InstanceType::m6g_xlarge:
            value = "m6g.xlarge";
            return true;
          case InstanceType::m6g_2xlarge:
            value = "m6g.2xlarge";
            return true;
          case InstanceType::m6g_4xlarge:
            value = "m6g.4xlarge";
            return true;
          case InstanceType::m6g_8xlarge:
            value = "m6g.8xlarge";
            return true;
          case InstanceType::m6g_12xlarge:
            value = "m6g.12xlarge";
            return true;
          case InstanceType::m6g_16xlarge:
            value = "m6g.16xlarge";
            return true;
          case InstanceType::m6gd_metal:
            value = "m6gd.metal";
            return true;
          case InstanceType::m6gd_medium:
            value = "m6gd.medium";
            return true;
          case InstanceType::m6gd_large:
            value = "m6gd.large";
            return true;
          case InstanceType::m6gd_xlarge:
            value = "m6gd.xlarge";
            return true;
          case InstanceType::m6gd_2xlarge:
            value = "m6gd.2xlarge";
            return true;
          case InstanceType::m6gd_4xlarge:
            value = "m6gd.4xlarge";
            return true;
          case InstanceType::m6gd_8xlarge:
            value = "m6gd.8xlarge";
            return true;
          case InstanceType::m6gd_12xlarge:
            value = "m6gd.12xlarge";
            return true;
          case InstanceType::m6gd_16xlarge:
            value = "m6gd.16xlarge";
            return true;
          case InstanceType::m6i_large:
            value = "m6i.large";
            return true;
          case InstanceType::m6i_xlarge:
            value = "m6i.xlarge";
            return true;
          case InstanceType::m6i_2xlarge:
            value = "m6i.2xlarge";
            return true;
          case InstanceType::m6i_4xlarge:
            value = "m6i.4xlarge";
            return true;
          case InstanceType::m6i_8xlarge:
            value = "m6i.8xlarge";
            return true;
          case InstanceType::m6i_12xlarge:
            value = "m6i.12xlarge";
            return true;
          case InstanceType::m6i_16xlarge:
            value = "m6i.16xlarge";
            return true;
          case InstanceType::m6i_24xlarge:
            value = "m6i.24xlarge";
            return true;
          case InstanceType::m6i_32xlarge:
            value = "m6i.32xlarge";
            return true;
          case InstanceType::m6i_metal:
            value = "m6i.metal";
            return true;
          case InstanceType::mac1_metal:
            value = "mac1.metal";
            return true;
          case InstanceType::p2_xlarge:
            value = "p2.xlarge";
            return true;
          case InstanceType::p2_8xlarge:
            value = "p2.8xlarge";
            return true;
          case InstanceType::p2_16xlarge:
            value = "p2.16xlarge";
            return true;
          case InstanceType::p3_2xlarge:
            value = "p3.2xlarge";
            return true;
          case InstanceType::p3_8xlarge:
            value = "p3.8xlarge";
            return true;
          case InstanceType::p3_16xlarge:
            value = "p3.16xlarge";
            return true;
          case InstanceType::p3dn_24xlarge:
            value = "p3dn.24xlarge";
            return true;
          case InstanceType::p4d_24xlarge:
            value = "p4d.24xlarge";
            return true;
          case InstanceType::r3_large:
            value = "r3.large";
            return true;
          case InstanceType::r3_xlarge:
            value = "r3.xlarge";
            return true;
          case InstanceType::r3_2xlarge:
            value = "r3.2xlarge";
            return true;
          case InstanceType::r3_4xlarge:
            value = "r3.4xlarge";
            return true;
          case InstanceType::r3_8xlarge:
            value = "r3.8xlarge";
            return true;
          case InstanceType::r4_large:
            value = "r4.large";
            return true;
          case InstanceType::r4_xlarge:
            value = "r4.xlarge";
            return true;
          case InstanceType::r4_2xlarge:
            value = "r4.2xlarge";
            return true;
          case InstanceType::r4_4xlarge:
            value = "r4.4xlarge";
            return true;
          case InstanceType::r4_8xlarge:
            value = "r4.8xlarge";
            return true;
          case InstanceType::r4_16xlarge:
            value = "r4.16xlarge";
            return true;
          case InstanceType::r5_large:
            value = "r5.large";
            return true;
          case InstanceType::r5_xlarge:
            value = "r5.xlarge";
            return true;
          case InstanceType::r5_2xlarge:
            value = "r5.2xlarge";
            return true;
          case InstanceType::r5_4xlarge:
            value = "r5.4xlarge";
            return true;
          case InstanceType::r5_8xlarge:
            value = "r5.8xlarge";
            return true;
          case InstanceType::r5_12xlarge:
            value = "r5.12xlarge";
            return true;
          case InstanceType::r5_16xlarge:
            value = "r5.16xlarge";
            return true;
          case InstanceType::r5_24xlarge:
            value = "r5.24xlarge";
            return true;
          case InstanceType::r5_metal:
            value = "r5.metal";
            return true;
          case InstanceType::r5a_large:
            value = "r5a.large";
            return true;
          case InstanceType::r5a_xlarge:
            value = "r5a.xlarge";
            return true;
          case InstanceType::r5a_2xlarge:
            value = "r5a.2xlarge";
            return true;
          case InstanceType::r5a_4xlarge:
            value = "r5a.4xlarge";
            return true;
          case InstanceType::r5a_8xlarge:
            value = "r5a.8xlarge";
            return true;
          case InstanceType::r5a_12xlarge:
            value = "r5a.12xlarge";
            return true;
          case InstanceType::r5a_16xlarge:
            value = "r5a.16xlarge";
            return true;
          case InstanceType::r5a_24xlarge:
            value = "r5a.24xlarge";
            return true;
          case InstanceType::r5ad_large:
            value = "r5ad.large";
            return true;
          case InstanceType::r5ad_xlarge:
            value = "r5ad.xlarge";
            return true;
          case InstanceType::r5ad_2xlarge:
            value = "r5ad.2xlarge";
            return true;
          case InstanceType::r5ad_4xlarge:
            value = "r5ad.4xlarge";
            return true;
          case InstanceType::r5ad_8xlarge:
            value = "r5ad.8xlarge";
            return true;
          case InstanceType::r5ad_12xlarge:
            value = "r5ad.12xlarge";
            return true;
          case InstanceType::r5ad_16xlarge:
            value = "r5ad.16xlarge";
            return true;
          case InstanceType::r5ad_24xlarge:
            value = "r5ad.24xlarge";
            return true;
          case InstanceType::r5b_large:
            value = "r5b.large";
            return true;
          case InstanceType::r5b_xlarge:
            value = "r5b.xlarge";
            return true;
          case InstanceType::r5b_2xlarge:
            value = "r5b.2xlarge";
            return true;
          case InstanceType::r5b_4xlarge:
            value = "r5b.4xlarge";
            return true;
          case InstanceType::r5b_8xlarge:
            value = "r5b.8xlarge";
            return true;
          case InstanceType::r5b_12xlarge:
            value = "r5b.12xlarge";
            return true;
          case InstanceType::r5b_16xlarge:
            value = "r5b.16xlarge";
            return true;
          case InstanceType::r5b_24xlarge:
            value = "r5b.24xlarge";
            return true;
          case InstanceType::r5b_metal:
            value = "r5b.metal";
            return true;
          case InstanceType::r5d_large:
            value = "r5d.large";
            return true;
          case InstanceType::r5d_xlarge:
            value = "r5d.xlarge";
            return true;
          case InstanceType::r5d_2xlarge:
            value = "r5d.2xlarge";
            return true;
          case InstanceType::r5d_4xlarge:
            value = "r5d.4xlarge";
            return true;
          case InstanceType::r5d_8xlarge:
            value = "r5d.8xlarge";
            return true;
          case InstanceType::r5d_12xlarge:
            value = "r5d.12xlarge";
            return true;
          case InstanceType::r5d_16xlarge:
            value = "r5d.16xlarge";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper3(InstanceType enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case InstanceType::r5d_24xlarge:
            value = "r5d.24xlarge";
            return true;
          case InstanceType::r5d_metal:
            value = "r5d.metal";
            return true;
          case InstanceType::r5dn_large:
            value = "r5dn.large";
            return true;
          case InstanceType::r5dn_xlarge:
            value = "r5dn.xlarge";
            return true;
          case InstanceType::r5dn_2xlarge:
            value = "r5dn.2xlarge";
            return true;
          case InstanceType::r5dn_4xlarge:
            value = "r5dn.4xlarge";
            return true;
          case InstanceType::r5dn_8xlarge:
            value = "r5dn.8xlarge";
            return true;
          case InstanceType::r5dn_12xlarge:
            value = "r5dn.12xlarge";
            return true;
          case InstanceType::r5dn_16xlarge:
            value = "r5dn.16xlarge";
            return true;
          case InstanceType::r5dn_24xlarge:
            value = "r5dn.24xlarge";
            return true;
          case InstanceType::r5dn_metal:
            value = "r5dn.metal";
            return true;
          case InstanceType::r5n_large:
            value = "r5n.large";
            return true;
          case InstanceType::r5n_xlarge:
            value = "r5n.xlarge";
            return true;
          case InstanceType::r5n_2xlarge:
            value = "r5n.2xlarge";
            return true;
          case InstanceType::r5n_4xlarge:
            value = "r5n.4xlarge";
            return true;
          case InstanceType::r5n_8xlarge:
            value = "r5n.8xlarge";
            return true;
          case InstanceType::r5n_12xlarge:
            value = "r5n.12xlarge";
            return true;
          case InstanceType::r5n_16xlarge:
            value = "r5n.16xlarge";
            return true;
          case InstanceType::r5n_24xlarge:
            value = "r5n.24xlarge";
            return true;
          case InstanceType::r5n_metal:
            value = "r5n.metal";
            return true;
          case InstanceType::r6g_medium:
            value = "r6g.medium";
            return true;
          case InstanceType::r6g_large:
            value = "r6g.large";
            return true;
          case InstanceType::r6g_xlarge:
            value = "r6g.xlarge";
            return true;
          case InstanceType::r6g_2xlarge:
            value = "r6g.2xlarge";
            return true;
          case InstanceType::r6g_4xlarge:
            value = "r6g.4xlarge";
            return true;
          case InstanceType::r6g_8xlarge:
            value = "r6g.8xlarge";
            return true;
          case InstanceType::r6g_12xlarge:
            value = "r6g.12xlarge";
            return true;
          case InstanceType::r6g_16xlarge:
            value = "r6g.16xlarge";
            return true;
          case InstanceType::r6g_metal:
            value = "r6g.metal";
            return true;
          case InstanceType::r6gd_medium:
            value = "r6gd.medium";
            return true;
          case InstanceType::r6gd_large:
            value = "r6gd.large";
            return true;
          case InstanceType::r6gd_xlarge:
            value = "r6gd.xlarge";
            return true;
          case InstanceType::r6gd_2xlarge:
            value = "r6gd.2xlarge";
            return true;
          case InstanceType::r6gd_4xlarge:
            value = "r6gd.4xlarge";
            return true;
          case InstanceType::r6gd_8xlarge:
            value = "r6gd.8xlarge";
            return true;
          case InstanceType::r6gd_12xlarge:
            value = "r6gd.12xlarge";
            return true;
          case InstanceType::r6gd_16xlarge:
            value = "r6gd.16xlarge";
            return true;
          case InstanceType::r6gd_metal:
            value = "r6gd.metal";
            return true;
          case InstanceType::r6i_large:
            value = "r6i.large";
            return true;
          case InstanceType::r6i_xlarge:
            value = "r6i.xlarge";
            return true;
          case InstanceType::r6i_2xlarge:
            value = "r6i.2xlarge";
            return true;
          case InstanceType::r6i_4xlarge:
            value = "r6i.4xlarge";
            return true;
          case InstanceType::r6i_8xlarge:
            value = "r6i.8xlarge";
            return true;
          case InstanceType::r6i_12xlarge:
            value = "r6i.12xlarge";
            return true;
          case InstanceType::r6i_16xlarge:
            value = "r6i.16xlarge";
            return true;
          case InstanceType::r6i_24xlarge:
            value = "r6i.24xlarge";
            return true;
          case InstanceType::r6i_32xlarge:
            value = "r6i.32xlarge";
            return true;
          case InstanceType::r6i_metal:
            value = "r6i.metal";
            return true;
          case InstanceType::t1_micro:
            value = "t1.micro";
            return true;
          case InstanceType::t2_nano:
            value = "t2.nano";
            return true;
          case InstanceType::t2_micro:
            value = "t2.micro";
            return true;
          case InstanceType::t2_small:
            value = "t2.small";
            return true;
          case InstanceType::t2_medium:
            value = "t2.medium";
            return true;
          case InstanceType::t2_large:
            value = "t2.large";
            return true;
          case InstanceType::t2_xlarge:
            value = "t2.xlarge";
            return true;
          case InstanceType::t2_2xlarge:
            value = "t2.2xlarge";
            return true;
          case InstanceType::t3_nano:
            value = "t3.nano";
            return true;
          case InstanceType::t3_micro:
            value = "t3.micro";
            return true;
          case InstanceType::t3_small:
            value = "t3.small";
            return true;
          case InstanceType::t3_medium:
            value = "t3.medium";
            return true;
          case InstanceType::t3_large:
            value = "t3.large";
            return true;
          case InstanceType::t3_xlarge:
            value = "t3.xlarge";
            return true;
          case InstanceType::t3_2xlarge:
            value = "t3.2xlarge";
            return true;
          case InstanceType::t3a_nano:
            value = "t3a.nano";
            return true;
          case InstanceType::t3a_micro:
            value = "t3a.micro";
            return true;
          case InstanceType::t3a_small:
            value = "t3a.small";
            return true;
          case InstanceType::t3a_medium:
            value = "t3a.medium";
            return true;
          case InstanceType::t3a_large:
            value = "t3a.large";
            return true;
          case InstanceType::t3a_xlarge:
            value = "t3a.xlarge";
            return true;
          case InstanceType::t3a_2xlarge:
            value = "t3a.2xlarge";
            return true;
          case InstanceType::t4g_nano:
            value = "t4g.nano";
            return true;
          case InstanceType::t4g_micro:
            value = "t4g.micro";
            return true;
          case InstanceType::t4g_small:
            value = "t4g.small";
            return true;
          case InstanceType::t4g_medium:
            value = "t4g.medium";
            return true;
          case InstanceType::t4g_large:
            value = "t4g.large";
            return true;
          case InstanceType::t4g_xlarge:
            value = "t4g.xlarge";
            return true;
          case InstanceType::t4g_2xlarge:
            value = "t4g.2xlarge";
            return true;
          case InstanceType::u_6tb1_56xlarge:
            value = "u-6tb1.56xlarge";
            return true;
          case InstanceType::u_6tb1_112xlarge:
            value = "u-6tb1.112xlarge";
            return true;
          case InstanceType::u_9tb1_112xlarge:
            value = "u-9tb1.112xlarge";
            return true;
          case InstanceType::u_12tb1_112xlarge:
            value = "u-12tb1.112xlarge";
            return true;
          case InstanceType::u_6tb1_metal:
            value = "u-6tb1.metal";
            return true;
          case InstanceType::u_9tb1_metal:
            value = "u-9tb1.metal";
            return true;
          case InstanceType::u_12tb1_metal:
            value = "u-12tb1.metal";
            return true;
          case InstanceType::u_18tb1_metal:
            value = "u-18tb1.metal";
            return true;
          case InstanceType::u_24tb1_metal:
            value = "u-24tb1.metal";
            return true;
          case InstanceType::vt1_3xlarge:
            value = "vt1.3xlarge";
            return true;
          case InstanceType::vt1_6xlarge:
            value = "vt1.6xlarge";
            return true;
          case InstanceType::vt1_24xlarge:
            value = "vt1.24xlarge";
            return true;
          case InstanceType::x1_16xlarge:
            value = "x1.16xlarge";
            return true;
          case InstanceType::x1_32xlarge:
            value = "x1.32xlarge";
            return true;
          case InstanceType::x1e_xlarge:
            value = "x1e.xlarge";
            return true;
          case InstanceType::x1e_2xlarge:
            value = "x1e.2xlarge";
            return true;
          case InstanceType::x1e_4xlarge:
            value = "x1e.4xlarge";
            return true;
          case InstanceType::x1e_8xlarge:
            value = "x1e.8xlarge";
            return true;
          case InstanceType::x1e_16xlarge:
            value = "x1e.16xlarge";
            return true;
          case InstanceType::x1e_32xlarge:
            value = "x1e.32xlarge";
            return true;
          case InstanceType::x2iezn_2xlarge:
            value = "x2iezn.2xlarge";
            return true;
          case InstanceType::x2iezn_4xlarge:
            value = "x2iezn.4xlarge";
            return true;
          case InstanceType::x2iezn_6xlarge:
            value = "x2iezn.6xlarge";
            return true;
          case InstanceType::x2iezn_8xlarge:
            value = "x2iezn.8xlarge";
            return true;
          case InstanceType::x2iezn_12xlarge:
            value = "x2iezn.12xlarge";
            return true;
          case InstanceType::x2iezn_metal:
            value = "x2iezn.metal";
            return true;
          case InstanceType::x2gd_medium:
            value = "x2gd.medium";
            return true;
          case InstanceType::x2gd_large:
            value = "x2gd.large";
            return true;
          case InstanceType::x2gd_xlarge:
            value = "x2gd.xlarge";
            return true;
          case InstanceType::x2gd_2xlarge:
            value = "x2gd.2xlarge";
            return true;
          case InstanceType::x2gd_4xlarge:
            value = "x2gd.4xlarge";
            return true;
          case InstanceType::x2gd_8xlarge:
            value = "x2gd.8xlarge";
            return true;
          case InstanceType::x2gd_12xlarge:
            value = "x2gd.12xlarge";
            return true;
          case InstanceType::x2gd_16xlarge:
            value = "x2gd.16xlarge";
            return true;
          case InstanceType::x2gd_metal:
            value = "x2gd.metal";
            return true;
          case InstanceType::z1d_large:
            value = "z1d.large";
            return true;
          case InstanceType::z1d_xlarge:
            value = "z1d.xlarge";
            return true;
          case InstanceType::z1d_2xlarge:
            value = "z1d.2xlarge";
            return true;
          case InstanceType::z1d_3xlarge:
            value = "z1d.3xlarge";
            return true;
          case InstanceType::z1d_6xlarge:
            value = "z1d.6xlarge";
            return true;
          case InstanceType::z1d_12xlarge:
            value = "z1d.12xlarge";
            return true;
          case InstanceType::z1d_metal:
            value = "z1d.metal";
            return true;
          case InstanceType::x2idn_16xlarge:
            value = "x2idn.16xlarge";
            return true;
          case InstanceType::x2idn_24xlarge:
            value = "x2idn.24xlarge";
            return true;
          case InstanceType::x2idn_32xlarge:
            value = "x2idn.32xlarge";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper4(InstanceType enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case InstanceType::x2iedn_xlarge:
            value = "x2iedn.xlarge";
            return true;
          case InstanceType::x2iedn_2xlarge:
            value = "x2iedn.2xlarge";
            return true;
          case InstanceType::x2iedn_4xlarge:
            value = "x2iedn.4xlarge";
            return true;
          case InstanceType::x2iedn_8xlarge:
            value = "x2iedn.8xlarge";
            return true;
          case InstanceType::x2iedn_16xlarge:
            value = "x2iedn.16xlarge";
            return true;
          case InstanceType::x2iedn_24xlarge:
            value = "x2iedn.24xlarge";
            return true;
          case InstanceType::x2iedn_32xlarge:
            value = "x2iedn.32xlarge";
            return true;
          case InstanceType::c6a_large:
            value = "c6a.large";
            return true;
          case InstanceType::c6a_xlarge:
            value = "c6a.xlarge";
            return true;
          case InstanceType::c6a_2xlarge:
            value = "c6a.2xlarge";
            return true;
          case InstanceType::c6a_4xlarge:
            value = "c6a.4xlarge";
            return true;
          case InstanceType::c6a_8xlarge:
            value = "c6a.8xlarge";
            return true;
          case InstanceType::c6a_12xlarge:
            value = "c6a.12xlarge";
            return true;
          case InstanceType::c6a_16xlarge:
            value = "c6a.16xlarge";
            return true;
          case InstanceType::c6a_24xlarge:
            value = "c6a.24xlarge";
            return true;
          case InstanceType::c6a_32xlarge:
            value = "c6a.32xlarge";
            return true;
          case InstanceType::c6a_48xlarge:
            value = "c6a.48xlarge";
            return true;
          case InstanceType::c6a_metal:
            value = "c6a.metal";
            return true;
          case InstanceType::m6a_metal:
            value = "m6a.metal";
            return true;
          case InstanceType::i4i_large:
            value = "i4i.large";
            return true;
          case InstanceType::i4i_xlarge:
            value = "i4i.xlarge";
            return true;
          case InstanceType::i4i_2xlarge:
            value = "i4i.2xlarge";
            return true;
          case InstanceType::i4i_4xlarge:
            value = "i4i.4xlarge";
            return true;
          case InstanceType::i4i_8xlarge:
            value = "i4i.8xlarge";
            return true;
          case InstanceType::i4i_16xlarge:
            value = "i4i.16xlarge";
            return true;
          case InstanceType::i4i_32xlarge:
            value = "i4i.32xlarge";
            return true;
          case InstanceType::i4i_metal:
            value = "i4i.metal";
            return true;
          case InstanceType::x2idn_metal:
            value = "x2idn.metal";
            return true;
          case InstanceType::x2iedn_metal:
            value = "x2iedn.metal";
            return true;
          case InstanceType::c7g_medium:
            value = "c7g.medium";
            return true;
          case InstanceType::c7g_large:
            value = "c7g.large";
            return true;
          case InstanceType::c7g_xlarge:
            value = "c7g.xlarge";
            return true;
          case InstanceType::c7g_2xlarge:
            value = "c7g.2xlarge";
            return true;
          case InstanceType::c7g_4xlarge:
            value = "c7g.4xlarge";
            return true;
          case InstanceType::c7g_8xlarge:
            value = "c7g.8xlarge";
            return true;
          case InstanceType::c7g_12xlarge:
            value = "c7g.12xlarge";
            return true;
          case InstanceType::c7g_16xlarge:
            value = "c7g.16xlarge";
            return true;
          case InstanceType::mac2_metal:
            value = "mac2.metal";
            return true;
          case InstanceType::c6id_large:
            value = "c6id.large";
            return true;
          case InstanceType::c6id_xlarge:
            value = "c6id.xlarge";
            return true;
          case InstanceType::c6id_2xlarge:
            value = "c6id.2xlarge";
            return true;
          case InstanceType::c6id_4xlarge:
            value = "c6id.4xlarge";
            return true;
          case InstanceType::c6id_8xlarge:
            value = "c6id.8xlarge";
            return true;
          case InstanceType::c6id_12xlarge:
            value = "c6id.12xlarge";
            return true;
          case InstanceType::c6id_16xlarge:
            value = "c6id.16xlarge";
            return true;
          case InstanceType::c6id_24xlarge:
            value = "c6id.24xlarge";
            return true;
          case InstanceType::c6id_32xlarge:
            value = "c6id.32xlarge";
            return true;
          case InstanceType::c6id_metal:
            value = "c6id.metal";
            return true;
          case InstanceType::m6id_large:
            value = "m6id.large";
            return true;
          case InstanceType::m6id_xlarge:
            value = "m6id.xlarge";
            return true;
          case InstanceType::m6id_2xlarge:
            value = "m6id.2xlarge";
            return true;
          case InstanceType::m6id_4xlarge:
            value = "m6id.4xlarge";
            return true;
          case InstanceType::m6id_8xlarge:
            value = "m6id.8xlarge";
            return true;
          case InstanceType::m6id_12xlarge:
            value = "m6id.12xlarge";
            return true;
          case InstanceType::m6id_16xlarge:
            value = "m6id.16xlarge";
            return true;
          case InstanceType::m6id_24xlarge:
            value = "m6id.24xlarge";
            return true;
          case InstanceType::m6id_32xlarge:
            value = "m6id.32xlarge";
            return true;
          case InstanceType::m6id_metal:
            value = "m6id.metal";
            return true;
          case InstanceType::r6id_large:
            value = "r6id.large";
            return true;
          case InstanceType::r6id_xlarge:
            value = "r6id.xlarge";
            return true;
          case InstanceType::r6id_2xlarge:
            value = "r6id.2xlarge";
            return true;
          case InstanceType::r6id_4xlarge:
            value = "r6id.4xlarge";
            return true;
          case InstanceType::r6id_8xlarge:
            value = "r6id.8xlarge";
            return true;
          case InstanceType::r6id_12xlarge:
            value = "r6id.12xlarge";
            return true;
          case InstanceType::r6id_16xlarge:
            value = "r6id.16xlarge";
            return true;
          case InstanceType::r6id_24xlarge:
            value = "r6id.24xlarge";
            return true;
          case InstanceType::r6id_32xlarge:
            value = "r6id.32xlarge";
            return true;
          case InstanceType::r6id_metal:
            value = "r6id.metal";
            return true;
          case InstanceType::r6a_large:
            value = "r6a.large";
            return true;
          case InstanceType::r6a_xlarge:
            value = "r6a.xlarge";
            return true;
          case InstanceType::r6a_2xlarge:
            value = "r6a.2xlarge";
            return true;
          case InstanceType::r6a_4xlarge:
            value = "r6a.4xlarge";
            return true;
          case InstanceType::r6a_8xlarge:
            value = "r6a.8xlarge";
            return true;
          case InstanceType::r6a_12xlarge:
            value = "r6a.12xlarge";
            return true;
          case InstanceType::r6a_16xlarge:
            value = "r6a.16xlarge";
            return true;
          case InstanceType::r6a_24xlarge:
            value = "r6a.24xlarge";
            return true;
          case InstanceType::r6a_32xlarge:
            value = "r6a.32xlarge";
            return true;
          case InstanceType::r6a_48xlarge:
            value = "r6a.48xlarge";
            return true;
          case InstanceType::r6a_metal:
            value = "r6a.metal";
            return true;
          case InstanceType::p4de_24xlarge:
            value = "p4de.24xlarge";
            return true;
          case InstanceType::u_3tb1_56xlarge:
            value = "u-3tb1.56xlarge";
            return true;
          case InstanceType::u_18tb1_112xlarge:
            value = "u-18tb1.112xlarge";
            return true;
          case InstanceType::u_24tb1_112xlarge:
            value = "u-24tb1.112xlarge";
            return true;
          case InstanceType::trn1_2xlarge:
            value = "trn1.2xlarge";
            return true;
          case InstanceType::trn1_32xlarge:
            value = "trn1.32xlarge";
            return true;
          case InstanceType::hpc6id_32xlarge:
            value = "hpc6id.32xlarge";
            return true;
          case InstanceType::c6in_large:
            value = "c6in.large";
            return true;
          case InstanceType::c6in_xlarge:
            value = "c6in.xlarge";
            return true;
          case InstanceType::c6in_2xlarge:
            value = "c6in.2xlarge";
            return true;
          case InstanceType::c6in_4xlarge:
            value = "c6in.4xlarge";
            return true;
          case InstanceType::c6in_8xlarge:
            value = "c6in.8xlarge";
            return true;
          case InstanceType::c6in_12xlarge:
            value = "c6in.12xlarge";
            return true;
          case InstanceType::c6in_16xlarge:
            value = "c6in.16xlarge";
            return true;
          case InstanceType::c6in_24xlarge:
            value = "c6in.24xlarge";
            return true;
          case InstanceType::c6in_32xlarge:
            value = "c6in.32xlarge";
            return true;
          case InstanceType::m6in_large:
            value = "m6in.large";
            return true;
          case InstanceType::m6in_xlarge:
            value = "m6in.xlarge";
            return true;
          case InstanceType::m6in_2xlarge:
            value = "m6in.2xlarge";
            return true;
          case InstanceType::m6in_4xlarge:
            value = "m6in.4xlarge";
            return true;
          case InstanceType::m6in_8xlarge:
            value = "m6in.8xlarge";
            return true;
          case InstanceType::m6in_12xlarge:
            value = "m6in.12xlarge";
            return true;
          case InstanceType::m6in_16xlarge:
            value = "m6in.16xlarge";
            return true;
          case InstanceType::m6in_24xlarge:
            value = "m6in.24xlarge";
            return true;
          case InstanceType::m6in_32xlarge:
            value = "m6in.32xlarge";
            return true;
          case InstanceType::m6idn_large:
            value = "m6idn.large";
            return true;
          case InstanceType::m6idn_xlarge:
            value = "m6idn.xlarge";
            return true;
          case InstanceType::m6idn_2xlarge:
            value = "m6idn.2xlarge";
            return true;
          case InstanceType::m6idn_4xlarge:
            value = "m6idn.4xlarge";
            return true;
          case InstanceType::m6idn_8xlarge:
            value = "m6idn.8xlarge";
            return true;
          case InstanceType::m6idn_12xlarge:
            value = "m6idn.12xlarge";
            return true;
          case InstanceType::m6idn_16xlarge:
            value = "m6idn.16xlarge";
            return true;
          case InstanceType::m6idn_24xlarge:
            value = "m6idn.24xlarge";
            return true;
          case InstanceType::m6idn_32xlarge:
            value = "m6idn.32xlarge";
            return true;
          case InstanceType::r6in_large:
            value = "r6in.large";
            return true;
          case InstanceType::r6in_xlarge:
            value = "r6in.xlarge";
            return true;
          case InstanceType::r6in_2xlarge:
            value = "r6in.2xlarge";
            return true;
          case InstanceType::r6in_4xlarge:
            value = "r6in.4xlarge";
            return true;
          case InstanceType::r6in_8xlarge:
            value = "r6in.8xlarge";
            return true;
          case InstanceType::r6in_12xlarge:
            value = "r6in.12xlarge";
            return true;
          case InstanceType::r6in_16xlarge:
            value = "r6in.16xlarge";
            return true;
          case InstanceType::r6in_24xlarge:
            value = "r6in.24xlarge";
            return true;
          case InstanceType::r6in_32xlarge:
            value = "r6in.32xlarge";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper5(InstanceType enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case InstanceType::r6idn_large:
            value = "r6idn.large";
            return true;
          case InstanceType::r6idn_xlarge:
            value = "r6idn.xlarge";
            return true;
          case InstanceType::r6idn_2xlarge:
            value = "r6idn.2xlarge";
            return true;
          case InstanceType::r6idn_4xlarge:
            value = "r6idn.4xlarge";
            return true;
          case InstanceType::r6idn_8xlarge:
            value = "r6idn.8xlarge";
            return true;
          case InstanceType::r6idn_12xlarge:
            value = "r6idn.12xlarge";
            return true;
          case InstanceType::r6idn_16xlarge:
            value = "r6idn.16xlarge";
            return true;
          case InstanceType::r6idn_24xlarge:
            value = "r6idn.24xlarge";
            return true;
          case InstanceType::r6idn_32xlarge:
            value = "r6idn.32xlarge";
            return true;
          case InstanceType::c7g_metal:
            value = "c7g.metal";
            return true;
          case InstanceType::m7g_medium:
            value = "m7g.medium";
            return true;
          case InstanceType::m7g_large:
            value = "m7g.large";
            return true;
          case InstanceType::m7g_xlarge:
            value = "m7g.xlarge";
            return true;
          case InstanceType::m7g_2xlarge:
            value = "m7g.2xlarge";
            return true;
          case InstanceType::m7g_4xlarge:
            value = "m7g.4xlarge";
            return true;
          case InstanceType::m7g_8xlarge:
            value = "m7g.8xlarge";
            return true;
          case InstanceType::m7g_12xlarge:
            value = "m7g.12xlarge";
            return true;
          case InstanceType::m7g_16xlarge:
            value = "m7g.16xlarge";
            return true;
          case InstanceType::m7g_metal:
            value = "m7g.metal";
            return true;
          case InstanceType::r7g_medium:
            value = "r7g.medium";
            return true;
          case InstanceType::r7g_large:
            value = "r7g.large";
            return true;
          case InstanceType::r7g_xlarge:
            value = "r7g.xlarge";
            return true;
          case InstanceType::r7g_2xlarge:
            value = "r7g.2xlarge";
            return true;
          case InstanceType::r7g_4xlarge:
            value = "r7g.4xlarge";
            return true;
          case InstanceType::r7g_8xlarge:
            value = "r7g.8xlarge";
            return true;
          case InstanceType::r7g_12xlarge:
            value = "r7g.12xlarge";
            return true;
          case InstanceType::r7g_16xlarge:
            value = "r7g.16xlarge";
            return true;
          case InstanceType::r7g_metal:
            value = "r7g.metal";
            return true;
          case InstanceType::c6in_metal:
            value = "c6in.metal";
            return true;
          case InstanceType::m6in_metal:
            value = "m6in.metal";
            return true;
          case InstanceType::m6idn_metal:
            value = "m6idn.metal";
            return true;
          case InstanceType::r6in_metal:
            value = "r6in.metal";
            return true;
          case InstanceType::r6idn_metal:
            value = "r6idn.metal";
            return true;
          case InstanceType::inf2_xlarge:
            value = "inf2.xlarge";
            return true;
          case InstanceType::inf2_8xlarge:
            value = "inf2.8xlarge";
            return true;
          case InstanceType::inf2_24xlarge:
            value = "inf2.24xlarge";
            return true;
          case InstanceType::inf2_48xlarge:
            value = "inf2.48xlarge";
            return true;
          case InstanceType::trn1n_32xlarge:
            value = "trn1n.32xlarge";
            return true;
          case InstanceType::i4g_large:
            value = "i4g.large";
            return true;
          case InstanceType::i4g_xlarge:
            value = "i4g.xlarge";
            return true;
          case InstanceType::i4g_2xlarge:
            value = "i4g.2xlarge";
            return true;
          case InstanceType::i4g_4xlarge:
            value = "i4g.4xlarge";
            return true;
          case InstanceType::i4g_8xlarge:
            value = "i4g.8xlarge";
            return true;
          case InstanceType::i4g_16xlarge:
            value = "i4g.16xlarge";
            return true;
          case InstanceType::hpc7g_4xlarge:
            value = "hpc7g.4xlarge";
            return true;
          case InstanceType::hpc7g_8xlarge:
            value = "hpc7g.8xlarge";
            return true;
          case InstanceType::hpc7g_16xlarge:
            value = "hpc7g.16xlarge";
            return true;
          case InstanceType::c7gn_medium:
            value = "c7gn.medium";
            return true;
          case InstanceType::c7gn_large:
            value = "c7gn.large";
            return true;
          case InstanceType::c7gn_xlarge:
            value = "c7gn.xlarge";
            return true;
          case InstanceType::c7gn_2xlarge:
            value = "c7gn.2xlarge";
            return true;
          case InstanceType::c7gn_4xlarge:
            value = "c7gn.4xlarge";
            return true;
          case InstanceType::c7gn_8xlarge:
            value = "c7gn.8xlarge";
            return true;
          case InstanceType::c7gn_12xlarge:
            value = "c7gn.12xlarge";
            return true;
          case InstanceType::c7gn_16xlarge:
            value = "c7gn.16xlarge";
            return true;
          case InstanceType::p5_48xlarge:
            value = "p5.48xlarge";
            return true;
          case InstanceType::m7i_large:
            value = "m7i.large";
            return true;
          case InstanceType::m7i_xlarge:
            value = "m7i.xlarge";
            return true;
          case InstanceType::m7i_2xlarge:
            value = "m7i.2xlarge";
            return true;
          case InstanceType::m7i_4xlarge:
            value = "m7i.4xlarge";
            return true;
          case InstanceType::m7i_8xlarge:
            value = "m7i.8xlarge";
            return true;
          case InstanceType::m7i_12xlarge:
            value = "m7i.12xlarge";
            return true;
          case InstanceType::m7i_16xlarge:
            value = "m7i.16xlarge";
            return true;
          case InstanceType::m7i_24xlarge:
            value = "m7i.24xlarge";
            return true;
          case InstanceType::m7i_48xlarge:
            value = "m7i.48xlarge";
            return true;
          case InstanceType::m7i_flex_large:
            value = "m7i-flex.large";
            return true;
          case InstanceType::m7i_flex_xlarge:
            value = "m7i-flex.xlarge";
            return true;
          case InstanceType::m7i_flex_2xlarge:
            value = "m7i-flex.2xlarge";
            return true;
          case InstanceType::m7i_flex_4xlarge:
            value = "m7i-flex.4xlarge";
            return true;
          case InstanceType::m7i_flex_8xlarge:
            value = "m7i-flex.8xlarge";
            return true;
          case InstanceType::m7a_medium:
            value = "m7a.medium";
            return true;
          case InstanceType::m7a_large:
            value = "m7a.large";
            return true;
          case InstanceType::m7a_xlarge:
            value = "m7a.xlarge";
            return true;
          case InstanceType::m7a_2xlarge:
            value = "m7a.2xlarge";
            return true;
          case InstanceType::m7a_4xlarge:
            value = "m7a.4xlarge";
            return true;
          case InstanceType::m7a_8xlarge:
            value = "m7a.8xlarge";
            return true;
          case InstanceType::m7a_12xlarge:
            value = "m7a.12xlarge";
            return true;
          case InstanceType::m7a_16xlarge:
            value = "m7a.16xlarge";
            return true;
          case InstanceType::m7a_24xlarge:
            value = "m7a.24xlarge";
            return true;
          case InstanceType::m7a_32xlarge:
            value = "m7a.32xlarge";
            return true;
          case InstanceType::m7a_48xlarge:
            value = "m7a.48xlarge";
            return true;
          case InstanceType::m7a_metal_48xl:
            value = "m7a.metal-48xl";
            return true;
          case InstanceType::hpc7a_12xlarge:
            value = "hpc7a.12xlarge";
            return true;
          case InstanceType::hpc7a_24xlarge:
            value = "hpc7a.24xlarge";
            return true;
          case InstanceType::hpc7a_48xlarge:
            value = "hpc7a.48xlarge";
            return true;
          case InstanceType::hpc7a_96xlarge:
            value = "hpc7a.96xlarge";
            return true;
          case InstanceType::c7gd_medium:
            value = "c7gd.medium";
            return true;
          case InstanceType::c7gd_large:
            value = "c7gd.large";
            return true;
          case InstanceType::c7gd_xlarge:
            value = "c7gd.xlarge";
            return true;
          case InstanceType::c7gd_2xlarge:
            value = "c7gd.2xlarge";
            return true;
          case InstanceType::c7gd_4xlarge:
            value = "c7gd.4xlarge";
            return true;
          case InstanceType::c7gd_8xlarge:
            value = "c7gd.8xlarge";
            return true;
          case InstanceType::c7gd_12xlarge:
            value = "c7gd.12xlarge";
            return true;
          case InstanceType::c7gd_16xlarge:
            value = "c7gd.16xlarge";
            return true;
          case InstanceType::m7gd_medium:
            value = "m7gd.medium";
            return true;
          case InstanceType::m7gd_large:
            value = "m7gd.large";
            return true;
          case InstanceType::m7gd_xlarge:
            value = "m7gd.xlarge";
            return true;
          case InstanceType::m7gd_2xlarge:
            value = "m7gd.2xlarge";
            return true;
          case InstanceType::m7gd_4xlarge:
            value = "m7gd.4xlarge";
            return true;
          case InstanceType::m7gd_8xlarge:
            value = "m7gd.8xlarge";
            return true;
          case InstanceType::m7gd_12xlarge:
            value = "m7gd.12xlarge";
            return true;
          case InstanceType::m7gd_16xlarge:
            value = "m7gd.16xlarge";
            return true;
          case InstanceType::r7gd_medium:
            value = "r7gd.medium";
            return true;
          case InstanceType::r7gd_large:
            value = "r7gd.large";
            return true;
          case InstanceType::r7gd_xlarge:
            value = "r7gd.xlarge";
            return true;
          case InstanceType::r7gd_2xlarge:
            value = "r7gd.2xlarge";
            return true;
          case InstanceType::r7gd_4xlarge:
            value = "r7gd.4xlarge";
            return true;
          case InstanceType::r7gd_8xlarge:
            value = "r7gd.8xlarge";
            return true;
          case InstanceType::r7gd_12xlarge:
            value = "r7gd.12xlarge";
            return true;
          case InstanceType::r7gd_16xlarge:
            value = "r7gd.16xlarge";
            return true;
          case InstanceType::r7a_medium:
            value = "r7a.medium";
            return true;
          case InstanceType::r7a_large:
            value = "r7a.large";
            return true;
          case InstanceType::r7a_xlarge:
            value = "r7a.xlarge";
            return true;
          case InstanceType::r7a_2xlarge:
            value = "r7a.2xlarge";
            return true;
          case InstanceType::r7a_4xlarge:
            value = "r7a.4xlarge";
            return true;
          case InstanceType::r7a_8xlarge:
            value = "r7a.8xlarge";
            return true;
          case InstanceType::r7a_12xlarge:
            value = "r7a.12xlarge";
            return true;
          case InstanceType::r7a_16xlarge:
            value = "r7a.16xlarge";
            return true;
          case InstanceType::r7a_24xlarge:
            value = "r7a.24xlarge";
            return true;
          case InstanceType::r7a_32xlarge:
            value = "r7a.32xlarge";
            return true;
          case InstanceType::r7a_48xlarge:
            value = "r7a.48xlarge";
            return true;
          case InstanceType::c7i_large:
            value = "c7i.large";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper6(InstanceType enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case InstanceType::c7i_xlarge:
            value = "c7i.xlarge";
            return true;
          case InstanceType::c7i_2xlarge:
            value = "c7i.2xlarge";
            return true;
          case InstanceType::c7i_4xlarge:
            value = "c7i.4xlarge";
            return true;
          case InstanceType::c7i_8xlarge:
            value = "c7i.8xlarge";
            return true;
          case InstanceType::c7i_12xlarge:
            value = "c7i.12xlarge";
            return true;
          case InstanceType::c7i_16xlarge:
            value = "c7i.16xlarge";
            return true;
          case InstanceType::c7i_24xlarge:
            value = "c7i.24xlarge";
            return true;
          case InstanceType::c7i_48xlarge:
            value = "c7i.48xlarge";
            return true;
          case InstanceType::mac2_m2pro_metal:
            value = "mac2-m2pro.metal";
            return true;
          case InstanceType::r7iz_large:
            value = "r7iz.large";
            return true;
          case InstanceType::r7iz_xlarge:
            value = "r7iz.xlarge";
            return true;
          case InstanceType::r7iz_2xlarge:
            value = "r7iz.2xlarge";
            return true;
          case InstanceType::r7iz_4xlarge:
            value = "r7iz.4xlarge";
            return true;
          case InstanceType::r7iz_8xlarge:
            value = "r7iz.8xlarge";
            return true;
          case InstanceType::r7iz_12xlarge:
            value = "r7iz.12xlarge";
            return true;
          case InstanceType::r7iz_16xlarge:
            value = "r7iz.16xlarge";
            return true;
          case InstanceType::r7iz_32xlarge:
            value = "r7iz.32xlarge";
            return true;
          case InstanceType::c7a_medium:
            value = "c7a.medium";
            return true;
          case InstanceType::c7a_large:
            value = "c7a.large";
            return true;
          case InstanceType::c7a_xlarge:
            value = "c7a.xlarge";
            return true;
          case InstanceType::c7a_2xlarge:
            value = "c7a.2xlarge";
            return true;
          case InstanceType::c7a_4xlarge:
            value = "c7a.4xlarge";
            return true;
          case InstanceType::c7a_8xlarge:
            value = "c7a.8xlarge";
            return true;
          case InstanceType::c7a_12xlarge:
            value = "c7a.12xlarge";
            return true;
          case InstanceType::c7a_16xlarge:
            value = "c7a.16xlarge";
            return true;
          case InstanceType::c7a_24xlarge:
            value = "c7a.24xlarge";
            return true;
          case InstanceType::c7a_32xlarge:
            value = "c7a.32xlarge";
            return true;
          case InstanceType::c7a_48xlarge:
            value = "c7a.48xlarge";
            return true;
          case InstanceType::c7a_metal_48xl:
            value = "c7a.metal-48xl";
            return true;
          case InstanceType::r7a_metal_48xl:
            value = "r7a.metal-48xl";
            return true;
          case InstanceType::r7i_large:
            value = "r7i.large";
            return true;
          case InstanceType::r7i_xlarge:
            value = "r7i.xlarge";
            return true;
          case InstanceType::r7i_2xlarge:
            value = "r7i.2xlarge";
            return true;
          case InstanceType::r7i_4xlarge:
            value = "r7i.4xlarge";
            return true;
          case InstanceType::r7i_8xlarge:
            value = "r7i.8xlarge";
            return true;
          case InstanceType::r7i_12xlarge:
            value = "r7i.12xlarge";
            return true;
          case InstanceType::r7i_16xlarge:
            value = "r7i.16xlarge";
            return true;
          case InstanceType::r7i_24xlarge:
            value = "r7i.24xlarge";
            return true;
          case InstanceType::r7i_48xlarge:
            value = "r7i.48xlarge";
            return true;
          case InstanceType::dl2q_24xlarge:
            value = "dl2q.24xlarge";
            return true;
          case InstanceType::mac2_m2_metal:
            value = "mac2-m2.metal";
            return true;
          case InstanceType::i4i_12xlarge:
            value = "i4i.12xlarge";
            return true;
          case InstanceType::i4i_24xlarge:
            value = "i4i.24xlarge";
            return true;
          case InstanceType::c7i_metal_24xl:
            value = "c7i.metal-24xl";
            return true;
          case InstanceType::c7i_metal_48xl:
            value = "c7i.metal-48xl";
            return true;
          case InstanceType::m7i_metal_24xl:
            value = "m7i.metal-24xl";
            return true;
          case InstanceType::m7i_metal_48xl:
            value = "m7i.metal-48xl";
            return true;
          case InstanceType::r7i_metal_24xl:
            value = "r7i.metal-24xl";
            return true;
          case InstanceType::r7i_metal_48xl:
            value = "r7i.metal-48xl";
            return true;
          case InstanceType::r7iz_metal_16xl:
            value = "r7iz.metal-16xl";
            return true;
          case InstanceType::r7iz_metal_32xl:
            value = "r7iz.metal-32xl";
            return true;
          case InstanceType::c7gd_metal:
            value = "c7gd.metal";
            return true;
          case InstanceType::m7gd_metal:
            value = "m7gd.metal";
            return true;
          case InstanceType::r7gd_metal:
            value = "r7gd.metal";
            return true;
          case InstanceType::g6_xlarge:
            value = "g6.xlarge";
            return true;
          case InstanceType::g6_2xlarge:
            value = "g6.2xlarge";
            return true;
          case InstanceType::g6_4xlarge:
            value = "g6.4xlarge";
            return true;
          case InstanceType::g6_8xlarge:
            value = "g6.8xlarge";
            return true;
          case InstanceType::g6_12xlarge:
            value = "g6.12xlarge";
            return true;
          case InstanceType::g6_16xlarge:
            value = "g6.16xlarge";
            return true;
          case InstanceType::g6_24xlarge:
            value = "g6.24xlarge";
            return true;
          case InstanceType::g6_48xlarge:
            value = "g6.48xlarge";
            return true;
          case InstanceType::gr6_4xlarge:
            value = "gr6.4xlarge";
            return true;
          case InstanceType::gr6_8xlarge:
            value = "gr6.8xlarge";
            return true;
          case InstanceType::c7i_flex_large:
            value = "c7i-flex.large";
            return true;
          case InstanceType::c7i_flex_xlarge:
            value = "c7i-flex.xlarge";
            return true;
          case InstanceType::c7i_flex_2xlarge:
            value = "c7i-flex.2xlarge";
            return true;
          case InstanceType::c7i_flex_4xlarge:
            value = "c7i-flex.4xlarge";
            return true;
          case InstanceType::c7i_flex_8xlarge:
            value = "c7i-flex.8xlarge";
            return true;
          case InstanceType::u7i_12tb_224xlarge:
            value = "u7i-12tb.224xlarge";
            return true;
          case InstanceType::u7in_16tb_224xlarge:
            value = "u7in-16tb.224xlarge";
            return true;
          case InstanceType::u7in_24tb_224xlarge:
            value = "u7in-24tb.224xlarge";
            return true;
          case InstanceType::u7in_32tb_224xlarge:
            value = "u7in-32tb.224xlarge";
            return true;
          case InstanceType::u7ib_12tb_224xlarge:
            value = "u7ib-12tb.224xlarge";
            return true;
          case InstanceType::c7gn_metal:
            value = "c7gn.metal";
            return true;
          case InstanceType::r8g_medium:
            value = "r8g.medium";
            return true;
          case InstanceType::r8g_large:
            value = "r8g.large";
            return true;
          case InstanceType::r8g_xlarge:
            value = "r8g.xlarge";
            return true;
          case InstanceType::r8g_2xlarge:
            value = "r8g.2xlarge";
            return true;
          case InstanceType::r8g_4xlarge:
            value = "r8g.4xlarge";
            return true;
          case InstanceType::r8g_8xlarge:
            value = "r8g.8xlarge";
            return true;
          case InstanceType::r8g_12xlarge:
            value = "r8g.12xlarge";
            return true;
          case InstanceType::r8g_16xlarge:
            value = "r8g.16xlarge";
            return true;
          case InstanceType::r8g_24xlarge:
            value = "r8g.24xlarge";
            return true;
          case InstanceType::r8g_48xlarge:
            value = "r8g.48xlarge";
            return true;
          case InstanceType::r8g_metal_24xl:
            value = "r8g.metal-24xl";
            return true;
          case InstanceType::r8g_metal_48xl:
            value = "r8g.metal-48xl";
            return true;
          case InstanceType::mac2_m1ultra_metal:
            value = "mac2-m1ultra.metal";
            return true;
          case InstanceType::g6e_xlarge:
            value = "g6e.xlarge";
            return true;
          case InstanceType::g6e_2xlarge:
            value = "g6e.2xlarge";
            return true;
          case InstanceType::g6e_4xlarge:
            value = "g6e.4xlarge";
            return true;
          case InstanceType::g6e_8xlarge:
            value = "g6e.8xlarge";
            return true;
          case InstanceType::g6e_12xlarge:
            value = "g6e.12xlarge";
            return true;
          case InstanceType::g6e_16xlarge:
            value = "g6e.16xlarge";
            return true;
          case InstanceType::g6e_24xlarge:
            value = "g6e.24xlarge";
            return true;
          case InstanceType::g6e_48xlarge:
            value = "g6e.48xlarge";
            return true;
          case InstanceType::c8g_medium:
            value = "c8g.medium";
            return true;
          case InstanceType::c8g_large:
            value = "c8g.large";
            return true;
          case InstanceType::c8g_xlarge:
            value = "c8g.xlarge";
            return true;
          case InstanceType::c8g_2xlarge:
            value = "c8g.2xlarge";
            return true;
          case InstanceType::c8g_4xlarge:
            value = "c8g.4xlarge";
            return true;
          case InstanceType::c8g_8xlarge:
            value = "c8g.8xlarge";
            return true;
          case InstanceType::c8g_12xlarge:
            value = "c8g.12xlarge";
            return true;
          case InstanceType::c8g_16xlarge:
            value = "c8g.16xlarge";
            return true;
          case InstanceType::c8g_24xlarge:
            value = "c8g.24xlarge";
            return true;
          case InstanceType::c8g_48xlarge:
            value = "c8g.48xlarge";
            return true;
          case InstanceType::c8g_metal_24xl:
            value = "c8g.metal-24xl";
            return true;
          case InstanceType::c8g_metal_48xl:
            value = "c8g.metal-48xl";
            return true;
          case InstanceType::m8g_medium:
            value = "m8g.medium";
            return true;
          case InstanceType::m8g_large:
            value = "m8g.large";
            return true;
          case InstanceType::m8g_xlarge:
            value = "m8g.xlarge";
            return true;
          case InstanceType::m8g_2xlarge:
            value = "m8g.2xlarge";
            return true;
          case InstanceType::m8g_4xlarge:
            value = "m8g.4xlarge";
            return true;
          case InstanceType::m8g_8xlarge:
            value = "m8g.8xlarge";
            return true;
          case InstanceType::m8g_12xlarge:
            value = "m8g.12xlarge";
            return true;
          case InstanceType::m8g_16xlarge:
            value = "m8g.16xlarge";
            return true;
          case InstanceType::m8g_24xlarge:
            value = "m8g.24xlarge";
            return true;
          case InstanceType::m8g_48xlarge:
            value = "m8g.48xlarge";
            return true;
          case InstanceType::m8g_metal_24xl:
            value = "m8g.metal-24xl";
            return true;
          case InstanceType::m8g_metal_48xl:
            value = "m8g.metal-48xl";
            return true;
          case InstanceType::x8g_medium:
            value = "x8g.medium";
            return true;
          case InstanceType::x8g_large:
            value = "x8g.large";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper7(InstanceType enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case InstanceType::x8g_xlarge:
            value = "x8g.xlarge";
            return true;
          case InstanceType::x8g_2xlarge:
            value = "x8g.2xlarge";
            return true;
          case InstanceType::x8g_4xlarge:
            value = "x8g.4xlarge";
            return true;
          case InstanceType::x8g_8xlarge:
            value = "x8g.8xlarge";
            return true;
          case InstanceType::x8g_12xlarge:
            value = "x8g.12xlarge";
            return true;
          case InstanceType::x8g_16xlarge:
            value = "x8g.16xlarge";
            return true;
          case InstanceType::x8g_24xlarge:
            value = "x8g.24xlarge";
            return true;
          case InstanceType::x8g_48xlarge:
            value = "x8g.48xlarge";
            return true;
          case InstanceType::x8g_metal_24xl:
            value = "x8g.metal-24xl";
            return true;
          case InstanceType::x8g_metal_48xl:
            value = "x8g.metal-48xl";
            return true;
          case InstanceType::i7ie_large:
            value = "i7ie.large";
            return true;
          case InstanceType::i7ie_xlarge:
            value = "i7ie.xlarge";
            return true;
          case InstanceType::i7ie_2xlarge:
            value = "i7ie.2xlarge";
            return true;
          case InstanceType::i7ie_3xlarge:
            value = "i7ie.3xlarge";
            return true;
          case InstanceType::i7ie_6xlarge:
            value = "i7ie.6xlarge";
            return true;
          case InstanceType::i7ie_12xlarge:
            value = "i7ie.12xlarge";
            return true;
          case InstanceType::i7ie_18xlarge:
            value = "i7ie.18xlarge";
            return true;
          case InstanceType::i7ie_24xlarge:
            value = "i7ie.24xlarge";
            return true;
          case InstanceType::i7ie_48xlarge:
            value = "i7ie.48xlarge";
            return true;
          case InstanceType::i8g_large:
            value = "i8g.large";
            return true;
          case InstanceType::i8g_xlarge:
            value = "i8g.xlarge";
            return true;
          case InstanceType::i8g_2xlarge:
            value = "i8g.2xlarge";
            return true;
          case InstanceType::i8g_4xlarge:
            value = "i8g.4xlarge";
            return true;
          case InstanceType::i8g_8xlarge:
            value = "i8g.8xlarge";
            return true;
          case InstanceType::i8g_12xlarge:
            value = "i8g.12xlarge";
            return true;
          case InstanceType::i8g_16xlarge:
            value = "i8g.16xlarge";
            return true;
          case InstanceType::i8g_24xlarge:
            value = "i8g.24xlarge";
            return true;
          case InstanceType::i8g_metal_24xl:
            value = "i8g.metal-24xl";
            return true;
          case InstanceType::u7i_6tb_112xlarge:
            value = "u7i-6tb.112xlarge";
            return true;
          case InstanceType::u7i_8tb_112xlarge:
            value = "u7i-8tb.112xlarge";
            return true;
          case InstanceType::u7inh_32tb_480xlarge:
            value = "u7inh-32tb.480xlarge";
            return true;
          case InstanceType::p5e_48xlarge:
            value = "p5e.48xlarge";
            return true;
          case InstanceType::p5en_48xlarge:
            value = "p5en.48xlarge";
            return true;
          case InstanceType::f2_12xlarge:
            value = "f2.12xlarge";
            return true;
          case InstanceType::f2_48xlarge:
            value = "f2.48xlarge";
            return true;
          case InstanceType::trn2_48xlarge:
            value = "trn2.48xlarge";
            return true;
          case InstanceType::c7i_flex_12xlarge:
            value = "c7i-flex.12xlarge";
            return true;
          case InstanceType::c7i_flex_16xlarge:
            value = "c7i-flex.16xlarge";
            return true;
          case InstanceType::m7i_flex_12xlarge:
            value = "m7i-flex.12xlarge";
            return true;
          case InstanceType::m7i_flex_16xlarge:
            value = "m7i-flex.16xlarge";
            return true;
          case InstanceType::i7ie_metal_24xl:
            value = "i7ie.metal-24xl";
            return true;
          case InstanceType::i7ie_metal_48xl:
            value = "i7ie.metal-48xl";
            return true;
          case InstanceType::i8g_48xlarge:
            value = "i8g.48xlarge";
            return true;
          case InstanceType::c8gd_medium:
            value = "c8gd.medium";
            return true;
          case InstanceType::c8gd_large:
            value = "c8gd.large";
            return true;
          case InstanceType::c8gd_xlarge:
            value = "c8gd.xlarge";
            return true;
          case InstanceType::c8gd_2xlarge:
            value = "c8gd.2xlarge";
            return true;
          case InstanceType::c8gd_4xlarge:
            value = "c8gd.4xlarge";
            return true;
          case InstanceType::c8gd_8xlarge:
            value = "c8gd.8xlarge";
            return true;
          case InstanceType::c8gd_12xlarge:
            value = "c8gd.12xlarge";
            return true;
          case InstanceType::c8gd_16xlarge:
            value = "c8gd.16xlarge";
            return true;
          case InstanceType::c8gd_24xlarge:
            value = "c8gd.24xlarge";
            return true;
          case InstanceType::c8gd_48xlarge:
            value = "c8gd.48xlarge";
            return true;
          case InstanceType::c8gd_metal_24xl:
            value = "c8gd.metal-24xl";
            return true;
          case InstanceType::c8gd_metal_48xl:
            value = "c8gd.metal-48xl";
            return true;
          case InstanceType::i7i_large:
            value = "i7i.large";
            return true;
          case InstanceType::i7i_xlarge:
            value = "i7i.xlarge";
            return true;
          case InstanceType::i7i_2xlarge:
            value = "i7i.2xlarge";
            return true;
          case InstanceType::i7i_4xlarge:
            value = "i7i.4xlarge";
            return true;
          case InstanceType::i7i_8xlarge:
            value = "i7i.8xlarge";
            return true;
          case InstanceType::i7i_12xlarge:
            value = "i7i.12xlarge";
            return true;
          case InstanceType::i7i_16xlarge:
            value = "i7i.16xlarge";
            return true;
          case InstanceType::i7i_24xlarge:
            value = "i7i.24xlarge";
            return true;
          case InstanceType::i7i_48xlarge:
            value = "i7i.48xlarge";
            return true;
          case InstanceType::i7i_metal_24xl:
            value = "i7i.metal-24xl";
            return true;
          case InstanceType::i7i_metal_48xl:
            value = "i7i.metal-48xl";
            return true;
          case InstanceType::p6_b200_48xlarge:
            value = "p6-b200.48xlarge";
            return true;
          case InstanceType::m8gd_medium:
            value = "m8gd.medium";
            return true;
          case InstanceType::m8gd_large:
            value = "m8gd.large";
            return true;
          case InstanceType::m8gd_xlarge:
            value = "m8gd.xlarge";
            return true;
          case InstanceType::m8gd_2xlarge:
            value = "m8gd.2xlarge";
            return true;
          case InstanceType::m8gd_4xlarge:
            value = "m8gd.4xlarge";
            return true;
          case InstanceType::m8gd_8xlarge:
            value = "m8gd.8xlarge";
            return true;
          case InstanceType::m8gd_12xlarge:
            value = "m8gd.12xlarge";
            return true;
          case InstanceType::m8gd_16xlarge:
            value = "m8gd.16xlarge";
            return true;
          case InstanceType::m8gd_24xlarge:
            value = "m8gd.24xlarge";
            return true;
          case InstanceType::m8gd_48xlarge:
            value = "m8gd.48xlarge";
            return true;
          case InstanceType::m8gd_metal_24xl:
            value = "m8gd.metal-24xl";
            return true;
          case InstanceType::m8gd_metal_48xl:
            value = "m8gd.metal-48xl";
            return true;
          case InstanceType::r8gd_medium:
            value = "r8gd.medium";
            return true;
          case InstanceType::r8gd_large:
            value = "r8gd.large";
            return true;
          case InstanceType::r8gd_xlarge:
            value = "r8gd.xlarge";
            return true;
          case InstanceType::r8gd_2xlarge:
            value = "r8gd.2xlarge";
            return true;
          case InstanceType::r8gd_4xlarge:
            value = "r8gd.4xlarge";
            return true;
          case InstanceType::r8gd_8xlarge:
            value = "r8gd.8xlarge";
            return true;
          case InstanceType::r8gd_12xlarge:
            value = "r8gd.12xlarge";
            return true;
          case InstanceType::r8gd_16xlarge:
            value = "r8gd.16xlarge";
            return true;
          case InstanceType::r8gd_24xlarge:
            value = "r8gd.24xlarge";
            return true;
          case InstanceType::r8gd_48xlarge:
            value = "r8gd.48xlarge";
            return true;
          case InstanceType::r8gd_metal_24xl:
            value = "r8gd.metal-24xl";
            return true;
          case InstanceType::r8gd_metal_48xl:
            value = "r8gd.metal-48xl";
            return true;
          case InstanceType::c8gn_medium:
            value = "c8gn.medium";
            return true;
          case InstanceType::c8gn_large:
            value = "c8gn.large";
            return true;
          case InstanceType::c8gn_xlarge:
            value = "c8gn.xlarge";
            return true;
          case InstanceType::c8gn_2xlarge:
            value = "c8gn.2xlarge";
            return true;
          case InstanceType::c8gn_4xlarge:
            value = "c8gn.4xlarge";
            return true;
          case InstanceType::c8gn_8xlarge:
            value = "c8gn.8xlarge";
            return true;
          case InstanceType::c8gn_12xlarge:
            value = "c8gn.12xlarge";
            return true;
          case InstanceType::c8gn_16xlarge:
            value = "c8gn.16xlarge";
            return true;
          case InstanceType::c8gn_24xlarge:
            value = "c8gn.24xlarge";
            return true;
          case InstanceType::c8gn_48xlarge:
            value = "c8gn.48xlarge";
            return true;
          case InstanceType::c8gn_metal_24xl:
            value = "c8gn.metal-24xl";
            return true;
          case InstanceType::c8gn_metal_48xl:
            value = "c8gn.metal-48xl";
            return true;
          case InstanceType::f2_6xlarge:
            value = "f2.6xlarge";
            return true;
          case InstanceType::p6e_gb200_36xlarge:
            value = "p6e-gb200.36xlarge";
            return true;
          default:
            return false;
          }
        }

        InstanceType GetInstanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          InstanceType enumValue;
          if (GetEnumForNameHelper0(hashCode, enumValue))
          {
             return enumValue;
          }
          else if (GetEnumForNameHelper1(hashCode, enumValue))
          {
             return enumValue;
          }
          else if (GetEnumForNameHelper2(hashCode, enumValue))
          {
             return enumValue;
          }
          else if (GetEnumForNameHelper3(hashCode, enumValue))
          {
             return enumValue;
          }
          else if (GetEnumForNameHelper4(hashCode, enumValue))
          {
             return enumValue;
          }
          else if (GetEnumForNameHelper5(hashCode, enumValue))
          {
             return enumValue;
          }
          else if (GetEnumForNameHelper6(hashCode, enumValue))
          {
             return enumValue;
          }
          else if (GetEnumForNameHelper7(hashCode, enumValue))
          {
             return enumValue;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceType>(hashCode);
          }

          return InstanceType::NOT_SET;
        }

        Aws::String GetNameForInstanceType(InstanceType enumValue)
        {
          Aws::String value;
          if (GetNameForEnumHelper0(enumValue, value))
          {
            return value;
          }
          else if (GetNameForEnumHelper1(enumValue, value))
          {
            return value;
          }
          else if (GetNameForEnumHelper2(enumValue, value))
          {
            return value;
          }
          else if (GetNameForEnumHelper3(enumValue, value))
          {
            return value;
          }
          else if (GetNameForEnumHelper4(enumValue, value))
          {
            return value;
          }
          else if (GetNameForEnumHelper5(enumValue, value))
          {
            return value;
          }
          else if (GetNameForEnumHelper6(enumValue, value))
          {
            return value;
          }
          else if (GetNameForEnumHelper7(enumValue, value))
          {
            return value;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
          }

          return {};
        }

      } // namespace InstanceTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
